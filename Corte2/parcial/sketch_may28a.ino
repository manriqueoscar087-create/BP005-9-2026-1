const int PIN_POTENCIOMETRO = 2;
const int PIN_LED = 5;

const int ADC_MAX = 4095;
const float VREF = 3.3;

const int CANTIDAD_LECTURAS = 10;
const int PAUSA_MS = 20;

const int UMBRAL_PARPADEO = 50;
const int UMBRAL_ENCENDIDO = 70;

const int LED_APAGADO = 0;
const int LED_PARPADEO = 1;
const int LED_ENCENDIDO = 2;

void tomarLecturas(int pin, int datos[], int cantidad, int pausaMs) {
  if (datos == nullptr || cantidad <= 0) {
    return;
  }

  for (int i = 0; i < cantidad; i++) {
    datos[i] = analogRead(pin);
    delay(pausaMs);
  }
}

void analizarLecturas(int datos[], int cantidad, int *promedio, int *minimo, int *maximo) {
  if (datos == nullptr || promedio == nullptr || minimo == nullptr || maximo == nullptr) {
    return;
  }

  long suma = 0;
  *minimo = datos[0];
  *maximo = datos[0];

  for (int i = 0; i < cantidad; i++) {
    suma += datos[i];

    if (datos[i] < *minimo) {
      *minimo = datos[i];
    }

    if (datos[i] > *maximo) {
      *maximo = datos[i];
    }
  }

  *promedio = suma / cantidad;
}

void calcularDatos(int valorADC, float *voltaje, int *porcentaje) {
  if (voltaje == nullptr || porcentaje == nullptr) {
    return;
  }

  *voltaje = (valorADC * VREF) / ADC_MAX;
  *porcentaje = (valorADC * 100L) / ADC_MAX;
}

void decidirEstadoLED(int porcentaje, int *estadoLED) {
  if (estadoLED == nullptr) {
    return;
  }

  if (porcentaje >= UMBRAL_ENCENDIDO) {
    *estadoLED = LED_ENCENDIDO;
  } else if (porcentaje >= UMBRAL_PARPADEO) {
    *estadoLED = LED_PARPADEO;
  } else {
    *estadoLED = LED_APAGADO;
  }
}

void aplicarEstadoLED(int pinLED, int estadoLED) {
  if (estadoLED == LED_ENCENDIDO) {
    digitalWrite(pinLED, HIGH);
  } else if (estadoLED == LED_PARPADEO) {
    digitalWrite(pinLED, HIGH);
    delay(50);
    digitalWrite(pinLED, LOW);
    delay(50);
  } else {
    digitalWrite(pinLED, LOW);
  }
}

void mostrarLecturas(int datos[], int cantidad) {
  Serial.print("Lecturas: ");

  for (int i = 0; i < cantidad; i++) {
    Serial.print(datos[i]);
    Serial.print(" ");
  }

  Serial.println();
}

void mostrarDatos(int promedio, int minimo, int maximo, float voltaje, int porcentaje, int estadoLED) {
  Serial.print("Promedio: ");
  Serial.print(promedio);

  Serial.print(" | Minimo: ");
  Serial.print(minimo);

  Serial.print(" | Maximo: ");
  Serial.print(maximo);

  Serial.print(" | Voltaje: ");
  Serial.print(voltaje, 2);
  Serial.print(" V");

  Serial.print(" | Porcentaje: ");
  Serial.print(porcentaje);
  Serial.print("%");

  Serial.print(" | LED: ");

  if (estadoLED == LED_ENCENDIDO) {
    Serial.println("ON");
  } else if (estadoLED == LED_PARPADEO) {
    Serial.println("PARPADEO");
  } else {
    Serial.println("OFF");
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);

  Serial.println("Iniciando practica final con ESP32...");
}

void loop() {
  int lecturas[CANTIDAD_LECTURAS];

  int promedio = 0;
  int minimo = 0;
  int maximo = 0;

  float voltaje = 0;
  int porcentaje = 0;
  int estadoLED = LED_APAGADO;

  tomarLecturas(PIN_POTENCIOMETRO, lecturas, CANTIDAD_LECTURAS, PAUSA_MS);
  analizarLecturas(lecturas, CANTIDAD_LECTURAS, &promedio, &minimo, &maximo);
  calcularDatos(promedio, &voltaje, &porcentaje);
  decidirEstadoLED(porcentaje, &estadoLED);
  aplicarEstadoLED(PIN_LED, estadoLED);

  mostrarLecturas(lecturas, CANTIDAD_LECTURAS);
  mostrarDatos(promedio, minimo, maximo, voltaje, porcentaje, estadoLED);

  Serial.println();

  delay(1000);
}