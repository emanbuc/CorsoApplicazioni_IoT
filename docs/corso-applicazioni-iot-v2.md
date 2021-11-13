# Corso Applicazioni IoT - 2021



## Prerequisiti

- Concetti di base di fisica ed elettronica a livello scolastico (corrente elettrica, tensione, batterie, conduttori, isolanti, ...) non sono necessarie competenze tecniche specialistiche di elettronica ed elettrotecnica per seguire questo corso.
  - Competenze di elettronica sono invece necessarie per la piena comprensione del funzionamento dei circuiti elettronici realizzati e per realizzare progetti avanzati.  Vedi sezione libri di elettronica
- Concetti di base di informatica e  programmazione (variabili, funzioni, operatori logici, cicli), compilazione ed esecuzione di un programma. 

## Programma

1. Introduzione IoT, Industrial IoT, Factory 4.0
2. Architettura di riferimento soluzioni IoT
3. Casi di studio
   - Self powerd IoT sensors https://www.enocean.com/en/applications/internet-of-things/ 
4. Laboratorio applicazioni IoT
   - Hardware
     - [Materiale per allestire il laboratorio](lab-bill-of-materials.md)
     - Panoramica su hardware utilizzato
       - ESP8266
       - Cavo programmazione/debug
       - Alimentazione
       - [BreadBoard](bread-board.md)
       - Sensori
       - Cavi connessione
   - Software
     - [ESP8266 Arduino Core](https://arduino-esp8266.readthedocs.io/en/3.0.2/index.html)
     - Ambiente di sviluppo
       - ArduinoIDE  (consigliato per principianti senza esperienza di sviluppo C/C++)
       - Visual StudioCode + Platformio (consigliato per sviluppatori esperti)
       - Visual Studio + Visual Micro (consigliato per sviluppatori Visual C/C++ )
       - ... 
5. Setup Ambiente di sviluppo
6. Programmare ESP8266
7. Piattaforme di sviluppo IoT
   - Blynk https://blynk.io/
   - Sinric https://sinric.pro/
   - Azure IoT https://docs.microsoft.com/en-us/azure/iot-fundamentals/
   - Azure IoT Central https://apps.azureiotcentral.com/ ; https://docs.microsoft.com/en-us/azure/iot-central/
8. Lettura ingressi digitali
   - Stato interruttore (switch)
   - Stato pulsante (button)
   - Sensore presenza PIR (PIR sensor)
9. Interfacciamento sensori digitali con protocollo di comunicazione specifico
   - sensore umidità e temperatura DHT11
   - Misuratore di distanza ad ultrasuoni HC-SR04
10. Lettura ingressi analogici
   - Sensore intensità luminosa LDR
   - Sensore temperatura LM35
11. Controllo di uscite digitali
    - Accendere un led (blink)
    - controllare motori lampade ed altri dispositivi con dei rele
12. Leggere e scrivere dati 
    - [Esp8266: Read and Write from/to EEPROM (Flash Memory) (hirnschall.net)](https://blog.hirnschall.net/esp8266-eeprom/) 
    - [ESP8266 Internal EEPROM Programming | Circuits4you.com](https://circuits4you.com/2016/12/16/esp8266-internal-eeprom-arduino/#:~:text= ESP8266 Internal EEPROM Programming  1 Write,EEPROM will appear on Serial terminal. More )
    - [Arduino - EEPROM](https://www.arduino.cc/en/Reference/EEPROM)
    - [Libraries — ESP8266 Arduino Core 3.0.2-29-g0761f6f6 documentation (arduino-esp8266.readthedocs.io)](https://arduino-esp8266.readthedocs.io/en/latest/libraries.html#eeprom)
    - [jwrw/ESP_EEPROM: An improved EEPROM emulation Arduino library for ESP8266 (github.com)](https://github.com/jwrw/ESP_EEPROM) 
    - [SD Card Module With ESP8266 : 6 Steps - Instructables](https://www.instructables.com/SD-Card-Module-With-ESP8266/)
13. Connettività Wifi ed Internet
    - connessione ad una rete Wifi
    - Connessione ad Internet e client HTTP/HTTPS
    - Server HTTP
    - Connessione ad infrastruttura cloud   