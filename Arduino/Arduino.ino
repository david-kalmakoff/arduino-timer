void setup() {
  // START: BLINK CODE
  pinMode(LED_BUILTIN, OUTPUT);

  // TODO: Setup button 1 as input
  // TODO: Setup button 2 as input
  // TODO: Setup display
}

void loop() {
  // TODO: When button 1 pressed, start countdown (3...2...1...), then start timer
  // TODO: When button 2 pressed, stop timer
  // TODO: If timer is running and reaches (x) seconds, end timer


  // START: BLINK CODE
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
}
