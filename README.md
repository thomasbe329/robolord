# Robolord wiki!
Höfundar: Thomas Ari Bech og Sigurður Galdur Loftsson

## Hvað verkefnið gerir
Þetta eru tvö vélmenni sem ferðast um eins og blind skordýr.
Eitt vélmenni keyrir kóða sem segir til um hvert það fer og sendir svo skipanir í hitt vélmennið sem gerir eins.

## Flæðirit
![](https://github.com/thomasbe329/robolord/blob/master/robolords%20flowchart.png)

## Hlutir sem þurfa fyrir hvert vélmenni
* Tvo VEX 2-Wire Motor 269.
* Tvö VEX dekk og eitt VEX omni-dekk.
* Tvo VEX Motor Controller 29.
* Vex byggingar efni.
* Margar skrúfur og festingar
* Tape
* Eitt VEX 7.2V 3000mVh NiNH Power Pack
* Eitt 9V rafhlöðu
* Eitt breadboard
* Eitt Arduino UNO
* Eitt Arduino Wireless Proto Shield
* Eitt Arduino XBee PRO S1
* Nokkrar snúrur

Þegar það er búið að seta það saman lítur það svona út:
![](https://github.com/thomasbe329/robolord/blob/master/20161130_092904.jpg)
![](https://github.com/thomasbe329/robolord/blob/master/20161130_092927.jpg)
![](https://github.com/thomasbe329/robolord/blob/master/20161130_093003.jpg)

## Stilla XBee-inn
Það þarf að nota forrit eins og XCTU til að stilla þá.
Til að stilla það rétt þarf bæði CH og ID að vera það sama.
Einn þeirra skal hafa MY sem 1 og DH og DL sem 0.
Hinn skal hafa MY og DH sem 0 og DL sem 1.
Það ætti að lýta svona út:
![Robot 1](https://github.com/thomasbe329/robolord/blob/3e0e963a8b122f0a2adf3ce08e47e7115d35ce14/Robot1XBee.PNG)
![Robot 2](https://github.com/thomasbe329/robolord/blob/3e0e963a8b122f0a2adf3ce08e47e7115d35ce14/Robot2XBee.PNG)
