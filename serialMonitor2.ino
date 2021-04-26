int n= 110;
int y= 121;
int e= 101;
int b= 98;
int a= 97;
int r= 114;
int i= 105;
int l= 108;
int m= 109;
int u= 117;
int dot= 46;
int c= 99;
int o= 111;
int lf= 10;
void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ;
  }
}

void loop() {
  Serial.write(n); Serial.print(", dec: "); Serial.print(n); Serial.print(", hex: "); Serial.print(n, HEX); Serial.print(", oct: "); Serial.print(n, OCT); Serial.print(", bin: "); Serial.println(n, BIN);
  Serial.write(y); Serial.print(", dec: "); Serial.print(y); Serial.print(", hex: "); Serial.print(y, HEX); Serial.print(", oct: "); Serial.print(y, OCT); Serial.print(", bin: "); Serial.println(y, BIN);
  Serial.write(e); Serial.print(", dec: "); Serial.print(e); Serial.print(", hex: "); Serial.print(e, HEX); Serial.print(", oct: "); Serial.print(e, OCT); Serial.print(", bin: "); Serial.println(e, BIN);
  Serial.write(b); Serial.print(", dec: "); Serial.print(b); Serial.print(", hex: "); Serial.print(b, HEX); Serial.print(", oct: "); Serial.print(b, OCT); Serial.print(", bin: "); Serial.println(b, BIN);
  Serial.write(a); Serial.print(", dec: "); Serial.print(a); Serial.print(", hex: "); Serial.print(a, HEX); Serial.print(", oct: "); Serial.print(a, OCT); Serial.print(", bin: "); Serial.println(a, BIN);
  Serial.write(r); Serial.print(", dec: "); Serial.print(r); Serial.print(", hex: "); Serial.print(r, HEX); Serial.print(", oct: "); Serial.print(r, OCT); Serial.print(", bin: "); Serial.println(r, BIN);
  Serial.write(i); Serial.print(", dec: "); Serial.print(i); Serial.print(", hex: "); Serial.print(i, HEX); Serial.print(", oct: "); Serial.print(i, OCT); Serial.print(", bin: "); Serial.println(i, BIN);
  Serial.write(l); Serial.print(", dec: "); Serial.print(l); Serial.print(", hex: "); Serial.print(l, HEX); Serial.print(", oct: "); Serial.print(l, OCT); Serial.print(", bin: "); Serial.println(l, BIN);  
  Serial.write(m); Serial.print(", dec: "); Serial.print(m); Serial.print(", hex: "); Serial.print(m, HEX); Serial.print(", oct: "); Serial.print(m, OCT); Serial.print(", bin: "); Serial.println(m, BIN);
  Serial.write(u); Serial.print(", dec: "); Serial.print(u); Serial.print(", hex: "); Serial.print(u, HEX); Serial.print(", oct: "); Serial.print(u, OCT); Serial.print(", bin: "); Serial.println(u, BIN);
  Serial.write(dot); Serial.print(", dec: "); Serial.print(dot); Serial.print(", hex: "); Serial.print(dot, HEX); Serial.print(", oct: "); Serial.print(dot, OCT); Serial.print(", bin: "); Serial.println(dot, BIN);
  Serial.write(c); Serial.print(", dec: "); Serial.print(c); Serial.print(", hex: "); Serial.print(c, HEX); Serial.print(", oct: "); Serial.print(c, OCT); Serial.print(", bin: "); Serial.println(c, BIN);
  Serial.write(o); Serial.print(", dec: "); Serial.print(o); Serial.print(", hex: "); Serial.print(o, HEX); Serial.print(", oct: "); Serial.print(o, OCT); Serial.print(", bin: "); Serial.println(o, BIN);
  Serial.write(m); Serial.print(", dec: "); Serial.print(m); Serial.print(", hex: "); Serial.print(m, HEX); Serial.print(", oct: "); Serial.print(m, OCT); Serial.print(", bin: "); Serial.println(m, BIN);
  Serial.write(lf); Serial.print(", dec: "); Serial.print(lf); Serial.print(", hex: "); Serial.print(lf, HEX); Serial.print(", oct: "); Serial.print(lf, OCT); Serial.print(", bin: "); Serial.println(lf, BIN);
    while (true) {
      continue;
    }
}
