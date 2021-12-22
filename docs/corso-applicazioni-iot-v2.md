# Corso Applicazioni IoT - 2021

## Prerequisiti

- Concetti di base di fisica ed elettronica a livello scolastico (corrente elettrica, tensione, batterie, conduttori, isolanti, ...) non sono necessarie competenze tecniche specialistiche di elettronica ed elettrotecnica per seguire questo corso.
  - Competenze di elettronica sono invece necessarie per la piena comprensione del funzionamento dei circuiti elettronici realizzati e per realizzare progetti avanzati.  Vedi sezione [libri di elettronica](books.md) 
- Concetti di base di informatica e  programmazione (variabili, funzioni, operatori logici, cicli), compilazione ed esecuzione di un programma.

## Programma

1. La rivoluzione industriale digitale
2. Introduzione IoT, Industrial IoT, Factory 4.0
3. Architettura di riferimento soluzioni IoT
4. Casi di studio
   - Un esempio di trasformazione da prodotto a servizio su larga scala: Sigma Air Utility: Air as a Service [https://us.kaeser.com/services/compressed-air-as-utility-service/](https://us.kaeser.com/services/compressed-air-as-utility-service/)
   - Una nuova lineea di prodotti per creare soluzioni IoT: Self powerd IoT sensors [https://www.enocean.com/en/applications/internet-of-things/](https://www.enocean.com/en/applications/internet-of-things)
   - Industrial IoT in OMA
   - Health Monitoring System: dal prodotto al servizio grazie a tecnologia IoT/Industry4.0
5. Iniziamo a costruire qualche cose anche noi: prima di cominciare abbiamo bisogno di 
   1. Creare un account [GitHub](https://github.com/) (potrebbe andare bene qualsiasi altro repository di sorgenti tipo GitLab, Bitbucket o altri, ma per partecipare ai progetti condivisi dobbiamo essere tutti quanti sulla stessa piattaforma)
   2. Creare repository GitHub pubblico per i progetti realizzati durante il corso
   3. Creare un account su una piattaforme IoT cloud. Le opzioni disponibili sono tante e avendo tempo si potrebbe costruire una piattaforma cloud IoT da zero utilizzando software open source come fatto per Health Monitoring System. Adesso però per iniziare velocemente ci conviene creare tutti quanti un account gratuito su [Arduino Cloud](https://store.arduino.cc/pages/iotcloud) sulla stessa piattaforma. Più avanti ne utilizzeremo anche altre per i progetti. 
   4. [Configurare l'ambiente di sviluppo](setup.md) hardware e software
   5. Qulache idea per cominciare 
6. Laboratorio applicazioni IoT
   - Hardware
     - [Materiale per allestire il laboratorio IoT del corso](lab-bill-of-materials.md)
     - Panoramica su hardware utilizzato
       - [ESP8266](esp8266.md)
       - [Cavo programmazione/debug](usb-cable.md)
       - [Alimentazione](power-esp8266.md) 
       - [BreadBoard](bread-board.md)
       - Cavi connessione. Ne esistono di molti tipi e con vari connettori. Quelli più comuni pe ri prototipi su bread board sono simili a questi  [Jumper wire cable 3 x 40 PCS. 20 cm each of M2M / F2M / F2F compatible – AZ-Delivery](https://www.az-delivery.com/en/collections/more-products-2/products/3er-set-40-stk-jumper-wire-m2m-f2m-f2f?variant=6107532034075)
       - Sensori: qui la cosa inizia a diventare interessante! Esistono sensori in grado di  rilevare o misurare ogni tipo di evento o fenomeno fisico.  L'unico limite è la capacità di inventare soluzioni innovative. 
         - Nel poco tempo disponibile riusciremo ad utilizzare solo alcuni sensori. Moltissimo hardware è però ormai disponibile a pochi euro e può essere acquistato online.  Se non sapete da dove cominciare cercate "Arduino sensor Kit". "IoT sensors kit" sui motori di ricerca. Oppure date un occhiata nella sezione [Libri consigliati](books.md) . 
   - Software
     - [ESP8266 Arduino Core](https://arduino-esp8266.readthedocs.io/en/3.0.2/index.html)
     - Ambiente di sviluppo
       - ArduinoIDE  (consigliato per principianti senza esperienza di sviluppo C/C++)
       - Visual StudioCode + Platformio (consigliato per sviluppatori esperti)
       - Visual Studio + Visual Micro (consigliato per sviluppatori Visual C/C++ )
7. Alimentare ESP8266 [power-esp8266.md](power-esp8266.md)
8. Connettere ESP8266 [connecting-esp8266.md](connecting-esp8266.md)
9. Programmare ESP8266 [programming-esp8266.md](programming-esp8266.md)
10. NodeMCU [nodemcu.md](nodemcu.md) 
11. ESP8266 Arduino Core [esp8266-arduinocore.md](esp8266-arduinocore.md)
12. Piattaforme IoT Cloud
    - Blynk [https://blynk.io/](https://blynk.io/)
    - Sinric [https://sinric.pro/](https://sinric.pro/)
    - Arduino Cloud IoT [https://docs.arduino.cc/cloud/iot-cloud](https://docs.arduino.cc/cloud/iot-cloud)
    - https://docs.arduino.cc/cloud/iot-cloud/tutorials/esp-32-cloud 
    - Azure IoT Hub - IoT Central
    - [https://apps.azureiotcentral.com/](https://apps.azureiotcentral.com/)
    - [https://docs.microsoft.com/en-us/azure/iot-central/](https://docs.microsoft.com/en-us/azure/iot-central/)
    - [https://docs.microsoft.com/en-us/azure/iot-fundamentals/](https://docs.microsoft.com/en-us/azure/iot-fundamentals/)
13. Lettura ingressi digitali
    -  [ESP8266-blink-serial.md](ESP8266-blink-serial.md) 
    - Stato interruttore (switch)
    - Stato pulsante (button)
    - Sensore presenza PIR (PIR sensor)
14. Interfacciamento sensori digitali con protocollo di comunicazione specifico
    - sensore umidità e temperatura DHT11
    - Misuratore di distanza ad ultrasuoni HC-SR04
15. Lettura ingressi analogici
    - Sensore intensità luminosa LDR
    - Sensore temperatura LM35
16. Controllo di uscite digitali
    - Accendere un led (blink)
    - controllare motori lampade ed altri dispositivi con dei rele
17. Leggere e scrivere dati 
    - [Esp8266: Read and Write from/to EEPROM (Flash Memory) (hirnschall.net)](https://blog.hirnschall.net/esp8266-eeprom/)
    - [ESP8266 Internal EEPROM Programming | Circuits4you.com](https://circuits4you.com/2016/12/16/esp8266-internal-eeprom-arduino/)
    - [Arduino - EEPROM](https://www.arduino.cc/en/Reference/EEPROM)
    - [Libraries — ESP8266 Arduino Core 3.0.2-29-g0761f6f6 documentation (arduino-esp8266.readthedocs.io)](https://arduino-esp8266.readthedocs.io/en/latest/libraries.html#eeprom)
    - [jwrw/ESP_EEPROM: An improved EEPROM emulation Arduino library for ESP8266 (github.com)](https://github.com/jwrw/ESP_EEPROM) 
    - [SD Card Module With ESP8266 : 6 Steps - Instructables](https://www.instructables.com/SD-Card-Module-With-ESP8266/)
18. Connettività Wifi ed Internet
    - connessione ad una rete Wifi
    - Connessione ad Internet e client HTTP/HTTPS
    - Server HTTP
    - Connessione ad infrastruttura cloud