int red = D2;
int green = D3;
int blue = D4;
int state[] = {0, 0, 0};

void setup() {
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(blue, OUTPUT);
    
    Particle.function("toggle", toggle);
}

void loop() {
    
}

int toggle(String colour) {
    int led;
    int s;
    
    if (colour.compareTo("red") == 0) {
        led = red;
        s = state[0] = !state[0]; 
    } else if (colour.compareTo("green") == 0) {
        led = green;
        s = state[1] = !state[1];
    } else if (colour.compareTo("blue") == 0) {
        led = blue;
        s = state[2] = !state[2]; 
    } else {
        return -1;
    }
    
    digitalWrite(led, s);
    
    return 0;
}

