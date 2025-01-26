# Esercitazione Arduino Cloud: ESP8266 e sensore DHT11/22

Ecco un esempio pratico su come utilizzare un modulo ESP8266 (come il NodeMCU) insieme a un sensore DHT11 per misurare la temperatura e l'umidità, inviando i dati a una dashboard su Arduino IoT Cloud.

**Componenti Necessari:**

- Modulo ESP8266 (ad esempio, NodeMCU)
- Sensore DHT11
- Resistenza da 10kΩ (se il DHT11 non ha una resistenza di pull-up integrata)
- Cavi jumper
- Breadboard (opzionale)

**Passaggi:**

1. **Connessioni Hardware:**

   - Collega il pin VCC del DHT11 al pin 3.3V del NodeMCU.
   - Collega il pin GND del DHT11 al GND del NodeMCU.
   - Collega il pin DATA del DHT11 a un pin digitale del NodeMCU (ad esempio, D4).
   - Se il DHT11 non ha una resistenza di pull-up integrata, collega una resistenza da 10kΩ tra il pin DATA e il pin VCC del DHT11.

2. **Configurazione su Arduino IoT Cloud:**

   - Crea un account su [Arduino IoT Cloud](https://create.arduino.cc/iot).
   - Aggiungi un nuovo dispositivo selezionando "Set up a third-party device" e scegli "ESP8266".
   - Segui le istruzioni per generare le credenziali del dispositivo.
   - Crea un nuovo "Thing" e aggiungi due proprietà:
     - `Temperatura`: Tipo `Float`, Unità `°C`, Permessi `Read Only`.
     - `Umidità`: Tipo `Float`, Unità `%`, Permessi `Read Only`.

3. **Programmazione:**

   - Installa l'[Arduino IDE](https://www.arduino.cc/en/software) e aggiungi il supporto per l'ESP8266 seguendo [questa guida](https://arduino-esp8266.readthedocs.io/en/latest/installing.html).
   - Installa la libreria `DHT sensor library` di Adafruit tramite il Library Manager dell'IDE.
   - Nello sketch generato da Arduino IoT Cloud, includi le librerie necessarie e definisci i parametri del DHT11:

     ```cpp
     #include "thingProperties.h"
     #include <DHT.h>

     #define DHTPIN D4     // Pin al quale è collegato il DHT11
     #define DHTTYPE DHT11 // Tipo di sensore

     DHT dht(DHTPIN, DHTTYPE);

     void setup() {
       // Inizializzazione seriale
       Serial.begin(9600);
       // Inizializzazione DHT11
       dht.begin();
       // Inizializzazione delle proprietà del cloud
       initProperties();
       // Connetti al Wi-Fi e al cloud
       ArduinoCloud.begin(ArduinoIoTPreferredConnection);
     }

     void loop() {
       ArduinoCloud.update();
       // Lettura dei valori dal DHT11
       float h = dht.readHumidity();
       float t = dht.readTemperature();
       // Controlla se le letture sono valide
       if (isnan(h) || isnan(t)) {
         Serial.println("Errore nella lettura dal DHT11");
         return;
       }
       // Assegna i valori alle proprietà del cloud
       temperatura = t;
       umidita = h;
       // Attendi 10 secondi prima della prossima lettura
       delay(10000);
     }
     ```

   - Carica lo sketch sul NodeMCU utilizzando l'IDE Arduino.

4. **Creazione della Dashboard:**

   - Nel tuo account Arduino IoT Cloud, crea una nuova dashboard.
   - Aggiungi widget per visualizzare le proprietà `Temperatura` e `Umidità`.
   - Associa ciascun widget alla rispettiva proprietà del tuo "Thing".

5. **Monitoraggio:**

   - Una volta che il NodeMCU è connesso al Wi-Fi e al cloud, i dati di temperatura e umidità saranno visualizzati in tempo reale sulla dashboard.

**Nota:** Assicurati di utilizzare le credenziali Wi-Fi corrette e le credenziali del dispositivo fornite da Arduino IoT Cloud nello sketch.

Per una guida visiva dettagliata, puoi consultare il seguente video:

[Come utilizzare ESP8266 NodeMCU con il sensore DHT11](https://www.youtube.com/watch?v=nLP6ArkNoO0&utm_source=chatgpt.com)
 
