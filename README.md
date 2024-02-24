# Disco Brooch

In diesem Code wird eine **zufällige** LED ausgewählt, eingeschaltet und für 3 Sekunden leuchten gelassen. Danach wird die LED ausgeschaltet und es wird für weitere 3 Sekunden gewartet, bevor der Vorgang wiederholt wird. So wird der Ablauf alle 6 Sekunden wiederholt.

In diesem Code überprüfen wir zuerst den Zustand des Buttons. Wenn der Button gedrückt ist, werden alle LEDs dauerhaft eingeschaltet. Wenn der Button nicht gedrückt ist, verhalten sich die LEDs wie zuvor und blinken zufällig. Der Zustand des Buttons wird gespeichert, um sicherzustellen, dass die LEDs nur einmal eingeschaltet werden, wenn der Button gedrückt wird, und dann erst wieder ausgeschaltet werden, wenn der Button erneut gedrückt wird.