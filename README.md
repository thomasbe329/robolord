# Lokaverkefni fyrir haust önn 2016
Höfundar: Thomas Ari Bech og Sigurður Galdur Loftsson

Verkaskipting: Thomas var mest að vinna við kóða og Sigurður var mest að vinna við að setja saman vélmennin.

## Dagbækur
[Dagbók Thomasar](https://raw.githubusercontent.com/thomasbe329/robolord/master/diary.log)

[Dagbók Sigurðs](https://raw.githubusercontent.com/Galdur/robolord/master/Diary.log)

## Hvað verkefnið gerir
Þetta eru tvö vélmenni sem ferðast um eins og blind skordýr.
Vélmenni 1 keyrir kóða sem segir til um hvert það fer og sendir svo skipanir á vélmenni 2 þannig að það hreyfist alveg eins og vélmenni eitt.

Myndband að vélmennonum að verki: [Vélmenni Tækniskólans Facebook](https://www.facebook.com/pg/V%C3%A9lmenni-T%C3%A6knisk%C3%B3lans-147435795724228/posts/)

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

## Future
Fyrir framtíðar útfærslur á þessu mætti bæta við sensorum þannig að vélmennin myndu sýður keyra á veggi og slíkt. Það væri líka fínt að gera fleiri vélmenni þannig að "swarm"-ið væri stærra og skemmtilegra. Það væri líka mögulegt að skipta út mótorunum fyrir nákvæmari mótor þannig að vélmennin myndu beygja jafn mikið. Við gætum líka bætt við einhvarskonar tengi við tölvu þannig að það væri hægt að stjórna vélmönnunum og slökkva á þeim ef þörf er.
