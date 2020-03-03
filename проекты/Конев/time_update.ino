  
#include <iarduino_RTC.h>
iarduino_RTC time(RTC_DS1302,9,7,8);

void setup() {
    delay(300);
    Serial.begin(9600);
    
    time.begin();
   // time.settime(15,54,21,03,03,20,2);  // 15  сек, 53 мин, 21 час, 03, марта, 2020 года, вторник
}
void loop(){

    if(millis()%1000==0){ // если прошла 1 секунда
      Serial.println(time.gettime("d-m-Y, H:i:s, D")); // выводим время


      if (time.seconds ==20) {
        Serial.println(time.gettimeUnix());
      }
      delay(1); // приостанавливаем на 1 мс, чтоб не выводить время несколько раз за 1мс
    }
}
