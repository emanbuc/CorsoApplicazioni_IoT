# Corso Applicazioni IoT - 2022

*Programma del corso (aggiornato al 20 settembre 2022)*

## Prerequisiti

- Concetti di base di fisica ed elettronica a livello scolastico (corrente elettrica, tensione, batterie, conduttori, isolanti, ...) non sono necessarie competenze tecniche specialistiche di elettronica ed elettrotecnica per seguire questo corso.
  - Competenze di elettronica sono invece necessarie per la piena comprensione del funzionamento dei circuiti elettronici realizzati e per realizzare progetti avanzati.  Vedi sezione [libri di elettronica](books.md)
- Concetti di base di informatica e  programmazione (variabili, funzioni, operatori logici, cicli), compilazione ed esecuzione di un programma.

## Parte 1 - IoT, Industrial IoT, Industry 4.0

1. La rivoluzione industriale digitale, cyber-physical systems, digital twins, Industry 4.0 ( vedi: *01.01_Digital_Industrial_Revolution.pdf*)
2. Introduzione IoT,Industrial IoT,  Industrial IoT Platforms,Architettura di riferimento soluzioni IoT (vedi: *01.02_Industrial_IOT.pdf*)
3. Applicazioni IoT (vedi: *01.03_Applicazioni IoT.pdf*)
4. Alcuni esempi sul mercato
   - Un esempio di trasformazione da prodotto a servizio su larga scala: Sigma Air Utility: Air as a Service [https://us.kaeser.com/services/compressed-air-as-utility-service/](https://us.kaeser.com/services/compressed-air-as-utility-service/)
   - Una nuova lineea di prodotti per creare soluzioni IoT: Self powerd IoT sensors [https://www.enocean.com/en/applications/internet-of-things/](https://www.enocean.com/en/applications/internet-of-things)
5. Iniziamo a costruire qualche cose anche noi: prima di cominciare abbiamo bisogno di:
   1. Creare un account [GitHub](https://github.com/) (potrebbe andare bene qualsiasi altro repository di sorgenti tipo GitLab, Bitbucket o altri, ma per partecipare ai progetti condivisi dobbiamo essere tutti quanti sulla stessa piattaforma)
   2. Creare repository GitHub pubblico per i progetti realizzati durante il corso
   3. Creare un account su una piattaforme IoT cloud. Le opzioni disponibili sono tante e avendo tempo si potrebbe costruire una piattaforma cloud IoT da zero utilizzando software open source come fatto per Health Monitoring System. Adesso però per iniziare velocemente ci conviene creare tutti quanti un account gratuito su [Arduino Cloud](https://store.arduino.cc/pages/iotcloud) sulla stessa piattaforma. Più avanti ne utilizzeremo anche altre per i progetti.
   4. Configurare l'ambiente di sviluppo che utilizzero durante il corso:  
      1. Segure passo-passo la procedura di [installazione e configurazione dell'ambiente  dell'ambiente di sviluppo](setup.md).
      2. Test ambiente di sviluppo: [ESP8266 Blink](https://github.com/emanbuc/CorsoApplicazioni_IoT/tree/main/ESP8266/Blink). Se tutto funziona il risultato dovrebbe essere come [questo](https://youtu.be/9f9czCYL8xw).

## Parte 2 - Dalla Teoria Alla Pratica

Iniziamo a costruire qualche cosa anche noi!

### Laboratorio IoT

Per prima cosa una veloce panoramica sugli strumenti del nostro laboratorio IoT. Tutto il materiale è a vostra disposizione durante il corso: lo potete anche portare a casa ... ricordatevi di riportare tutto  alla entro l'ultima lezione!

- Hardware
  - [Materiale per allestire il laboratorio IoT del corso](lab-bill-of-materials.md)
  - Panoramica su hardware utilizzato
    - [ESP8266](esp8266.md)
    - Scheda di sviluppo [NodeMCU](nodemcu.md)
    - [Cavo programmazione/debug](usb-cable.md)
    - [Alimentazione](power-esp8266.md)
    - [BreadBoard](bread-board.md)
    - Cavi connessione. Ne esistono di molti tipi e con vari connettori. Quelli più comuni pe ri prototipi su bread board sono simili a questi  [Jumper wire cable 3 x 40 PCS. 20 cm each of M2M / F2M / F2F compatible – AZ-Delivery](https://www.az-delivery.com/en/collections/more-products-2/products/3er-set-40-stk-jumper-wire-m2m-f2m-f2f?variant=6107532034075)
    - Sensori: qui la cosa inizia a diventare interessante! Esistono sensori in grado di  rilevare o misurare ogni tipo di evento o fenomeno fisico. (vedi [elenco sensori](iot_components_list.md)) disponibili in laboratorio). L'unico limite è la capacità di inventare soluzioni innovative.
      - Nel poco tempo disponibile riusciremo ad utilizzare solo alcuni sensori. Moltissimo hardware è però ormai disponibile a pochi euro e può essere acquistato online.  Se non sapete da dove cominciare cercate "Arduino sensor Kit". "IoT sensors kit" sui motori di ricerca. Oppure date un occhiata nella sezione [Libri consigliati](books.md).
- Software
  - [ESP8266 Arduino Core](esp8266-arduinocore.md)
  - Ambiente di sviluppo (vedi [Configurare l'ambiente di sviluppo](setup.md) )
  
### Applicazioni IoT con ESP8266

1. Sviluppare Applicazioni IoT con ESP8266
   - Alimentare ESP8266 [power-esp8266.md](power-esp8266.md)
   - Connettere ESP8266 [connecting-esp8266.md](connecting-esp8266.md) al mondo esterno
   - Programmare ESP8266 [programming-esp8266.md](programming-esp8266.md)
   - *Progetto01*: [ESP8266 Blink](https://github.com/emanbuc/CorsoApplicazioni_IoT/tree/main/ESP8266/Blink)
   - Utlizzo porta seriale e led a bordo della scheda [ESP8266-blink-serial.md](ESP8266-blink-serial.md)
   - *Progetto02*: [Blink Without Delay](https://github.com/emanbuc/CorsoApplicazioni_IoT/tree/main/ESP8266/Blink-without-delay)
2. Connettere ESP8266 ad una piattaforma cloud.
   - [Arduino IoT Cloud](esp8266-arduino-cloud.md)
   - *Progetto03*: [ESP8266/Arduino-cloud-ESP-Test](https://github.com/emanbuc/CorsoApplicazioni_IoT/tree/main/ESP8266/Arduino-cloud-ESP-Test)

## Parte 3 - Realizziamo una applicazione completa: sistema di monitoraggio e controllo ambientale

1. Esempi di progetti IoT completi
   1. Health Monitoring System: dal prodotto al servizio grazie a tecnologia IoT/Industry4.0
   2. Sistema di gestione irrigaizone su vasta scala
2. Piattaforme IoT Cloud "chiavi in mano"
    - Blynk [https://blynk.io/](https://blynk.io/)
    - Sinric [https://sinric.pro/](https://sinric.pro/)
    - [Arduino IoT Cloud](esp8266-arduino-cloud.md)
    - Azure IoT Hub - IoT Central
      - [https://apps.azureiotcentral.com/](https://apps.azureiotcentral.com/)
      - [https://docs.microsoft.com/en-us/azure/iot-central/](https://docs.microsoft.com/en-us/azure/iot-central/)
      - [https://docs.microsoft.com/en-us/azure/iot-fundamentals/](https://docs.microsoft.com/en-us/azure/iot-fundamentals/)
3. Monitoraggio temperatura ed umidità con sensore DHT11(DHT22)
   - Sensore digitale di temperatura ed umidità DHT11/DHT22
   - *Progetto04*: [DHTtester](https://github.com/emanbuc/CorsoApplicazioni_IoT/tree/main/ESP8266/DHT11-DHT22_sensor/DHTtester)
   - *Progetto05*: [Arduinocloud/DHT11-Cloud](https://github.com/emanbuc/CorsoApplicazioni_IoT/tree/main/ESP8266/DHT11-DHT22_sensor/Arduinocloud/DHT11-Cloud)
   - *Progetto06*: [Sinric/DHT11-Sinric](https://github.com/emanbuc/CorsoApplicazioni_IoT/tree/main/ESP8266/DHT11-DHT22_sensor/Sinric/DHT11-Sinric)
4. Monitoraggio qualità dell'aria con sensori della serie MQ
   - Utilizzo [sensori serie MQ con ESP8266](ESP8266_MQ_gas_sensor.md)
   - Progetto07:  [ESP8266-MQ](https://github.com/emanbuc/CorsoApplicazioni_IoT/tree/main/ESP8266/ESP8266-MQ)
5. Controllo remoto di dispositivi esterni tramite GPIO
   - uscite digitali GPIO
   - *Progetto07*: controllo remoto di un dispositivo elettronico di bassa potenza

## Parte 4 - Utilizzo di sensori, attuatori e periferiche

1. Programmazione sistemi embedded
   - Sistemi di eleborazione dati real-time
   - Interrupt
2. Lettura ingressi digitali
    - Stato interruttore (switch)
    - Stato pulsante (button)
    - Sensore presenza PIR (PIR sensor)
3. Interfacciamento sensori digitali con protocollo di comunicazione specifico
    - sensore umidità e temperatura DHT11
    - Misuratore di distanza ad ultrasuoni HC-SR04
4. Lettura ingressi analogici
    - Sensore intensità luminosa LDR
    - Sensore temperatura LM35
5. Controllo di uscite digitali
    - Accendere un led (blink)
    - Controllare motori lampade ed altri dispositivi con dei rele
    - Uscite digitali in modelaità PWM
6. Leggere e scrivere dati
    - [Esp8266: Read and Write from/to EEPROM (Flash Memory) (hirnschall.net)](https://blog.hirnschall.net/esp8266-eeprom/)
    - [ESP8266 Internal EEPROM Programming | Circuits4you.com](https://circuits4you.com/2016/12/16/esp8266-internal-eeprom-arduino/)
    - [Arduino - EEPROM](https://www.arduino.cc/en/Reference/EEPROM)
    - [Libraries — ESP8266 Arduino Core 3.0.2-29-g0761f6f6 documentation (arduino-esp8266.readthedocs.io)](https://arduino-esp8266.readthedocs.io/en/latest/libraries.html#eeprom)
    - [jwrw/ESP_EEPROM: An improved EEPROM emulation Arduino library for ESP8266 (github.com)](https://github.com/jwrw/ESP_EEPROM)
    - [SD Card Module With ESP8266 : 6 Steps - Instructables](https://www.instructables.com/SD-Card-Module-With-ESP8266/)
7. Connettività Wifi ed Internet
    - connessione ad una rete Wifi
    - Connessione ad Internet e client HTTP/HTTPS
    - Server HTTP
    - Connessione ad infrastruttura cloud