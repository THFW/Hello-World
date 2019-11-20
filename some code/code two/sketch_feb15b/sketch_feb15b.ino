// 定义LED神灯的针脚号是 11
int led = 11;
// 定义LED神灯当前亮度值为整数值0
int brightness = 0;
// 定义LED神灯亮度变化的幅度为整数值5
int fadeAmount = 5;

// 对Arduino电路板或相关状态进行初始化方法 


void setup() {
  // put your setup code here, to run once:
  // 声明11号针脚为输出状态
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// 设置LED神灯的当前亮度
  analogWrite(led, brightness);

  // 计算LED神灯的此次循环的亮度数值，
  // 每次循环累加5（fadeAmount定义的数值）。
  brightness = brightness + fadeAmount;

  // 此判断语句实现的效果是，判断LED神灯的当前亮度，
  // 当LED神灯全亮，将fadeAmount数值变为负数，
  // 达到降低LED神灯亮度的效果。
  // 当LED神灯熄灭，将fadeAmount数值变为正数，
  // 达到增加LED神灯亮度的效果。
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }
  // 每次循环结束，进入下一次循环之前，延时30毫秒执行
  delay(30);
}
