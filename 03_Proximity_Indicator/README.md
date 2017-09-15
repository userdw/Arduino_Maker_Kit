# [ENGLISH] Project 3: Proximity Indicator
Measuring distance can be done through a lot of methods. One of the most common method to be used is using the reflection of light. In this project you will learn how to use phototransistor to detect an object and get the rough estimation of object's distance. The system in this project will detect the presence of an object. If the object is getting closer, LED will blink faster. On the contrary, if the object is getting further, LED will blink slower.

<img src="/images/Proximity_Indicator.png" height="400">

### In this project you will need:
* DT-AVR UNO R3 (1),
* I/O Expansion Shield (1),
* LED Module (1),
* IR Sensor (1).

### Assemble the modules following these steps:
1. Plug the I/O Expansion Shield to the top of DT-AVR UNO R3,
2. Plug the LED Module to the header on the I/O Expansion Shield labelled **9**,
3. Plug the IR Sensor to the header on the I/O Expansion Shield labelled **A0**,
4. Upload the [Proximity_Indicator](/03_Proximity_Indicator/Proximity_Indicator) code into DT-AVR UNO R3.

Once you turn on the DT-AVR UNO R3, it will enter calibration mode for about 3 seconds. Cover the IR Sensor with the desired object which will be tracked to determine the highest brightness, and uncover the IR Sensor to determine the lowest brightness.
If there are no mistakes, LED Module should blink faster as the object gets near. On the contrary, LED Module should blink slower as the objects gets further.

# [BAHASA INDONESIA] Proyek 3: Proximity Indicator
Pengukuran jarak dapat dilakukan dengan banyak cara, dimana salah satu metode yang digunakan adalah memanfaatkan sifat pantulan cahaya. Proyek ini bertujuan untuk mendemonstrasikan penggunaan sensor cahaya, yaitu phototransistor dengan DT-AVR UNO R3. Sistem pada proyek ini akan mendeteksi keberadaan dari suatu obyek. Apabila obyek semakin mendekat maka LED akan berkedip semakin cepat. Sebaliknya, apabila obyek semakin menjauh, maka kedipan LED akan semakin lambat.

<img src="/images/Proximity_Indicator.png" height="400">

### Modul-modul yang dibutuhkan pada proyek ini:
* DT-AVR UNO R3 (1),
* I/O Expansion Shield (1),
* LED Module (1),
* IR Sensor (1).

### Hubungkan modul-modul di atas mengikuti langkah-langkah di bawah ini:
1. Pasang I/O Expansion Shield di atas DT-AVR UNO R3,
2. Hubungkan LED Module ke header I/O Expansion Shield yang berlabel **9**,
3. Hubungkan IR Sensor ke header I/O Expansion Shield yang berlabel **A0**,
4. Upload kode program [Proximity_Indicator](/03_Proximity_Indicator/Proximity_Indicator) ke DT-AVR UNO R3.

Pada saat DT-AVR UNO R3 dinyalakan, DT-AVR UNO R3 akan memasuki proses kalibrasi selama kurang lebih 3 detik. Tutupi IR Sensor dengan obyek yang hendak dideteksi untuk mendapatkan nilai kecerahan tertinggi, dan hilangkan halangan dari IR Sensor untuk mendapatkan nilai kecerahan terendah.
Apabila tidak terdapat kesalahan, maka LED Module akan berkedip semakin cepat saat obyek yang dideteksi semakin mendekat. Sebaliknya, LED Module akan berkedip semakin lambat saat obyek yang dideteksi semakin menjauh.
