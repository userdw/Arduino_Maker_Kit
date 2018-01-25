# [ENGLISH] Project 6: Potentiometer Controlled Servo
If we need to control an output which have more states than on/off, we will have some difficulties if we use switch as an input to control it. That's because the switch itself only has two states. For example, something that have more states than on/off is the speed of a motor, the brightness of a LED, the speed of running text, etc. In this project, you will be introduced to potentiometer and its usage as an input to control servo movement.

<img src="/images/Potentiometer_Controlled_Servo.png" height="400">

### In this project you will need:
* DT-AVR UNO R3 (1),
* I/O Expansion Shield (1),
* Rotation Sensor (1),
* Micro Servo (1).

### Assemble the modules following these steps:
1. **Change the PWR_SEL jumper on I/O Expansion Shield to 5V**,
2. Plug the I/O Expansion Shield to the top of DT-AVR UNO R3,
3. Plug the Rotation Sensor to the header on the I/O Expansion Shield labelled **A0**,
4. Plug the Micro Servo to the header on the I/O Expansion Shield labelled **6**,
5. Upload the [Potentiometer_Controlled_Servo](/06_Potentiometer_Controlled_Servo/Potentiometer_Controlled_Servo) code into DT-AVR UNO R3.

If there are no mistakes, Micro Servo movement will be determined by the rotation of Rotation Sensor.

# [BAHASA INDONESIA] Proyek 6: Potentiometer Controlled Servo
Apabila kita hendak mengendalikan suatu output yang memiliki beberapa keadaan selain on/off, maka kita akan mengalami kesulitan apabila menggunakan switch sebagai input, karena switch sendiri hanya memiliki dua kondisi saja. Beberapa contoh sederhana adalah pengaturan kecepatan suatu motor, pengaturan intensitas cahaya suatu lampu, pengaturan kecepatan gerak dari sebuah running text, dll.
Pada proyek ini akan dikenalkan penggunaan potensiometer sebagai perangkat input, dimana dengan potensiometer tersebut kita akan mengendalikan sudut dari sebuah motor servo.

<img src="/images/Potentiometer_Controlled_Servo.png" height="400">

### Modul-modul yang dibutuhkan pada proyek ini:
* DT-AVR UNO R3 (1),
* I/O Expansion Shield (1),
* Rotation Sensor (1),
* Micro Servo (1).

### Hubungkan modul-modul di atas mengikuti langkah-langkah di bawah ini:
1. **Ubah posisi jumper PWR_SEL pada I/O Expansion Shield ke 5V**,
2. Pasang I/O Expansion Shield di atas DT-AVR UNO R3,
3. Hubungkan Rotation Sensor ke header I/O Expansion Shield yang berlabel **A0**,
4. Hubungkan Micro Servo ke header I/O Expansion Shield yang berlabel **6**,
5. Upload kode program [Potentiometer_Controlled_Servo](/06_Potentiometer_Controlled_Servo/Potentiometer_Controlled_Servo) ke DT-AVR UNO R3.

Apabila tidak terdapat kesalahan, gerakan Micro Servo akan ditentukan dari putaran yang diberikan ke Rotation Sensor.
