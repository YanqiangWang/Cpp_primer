#ifndef CP5_ex7_43_h
#define CP5_ex7_43_h

class NoDefault {
public:
	NoDefault(int i): i_(i) {}

private:
	int i_;
};

class C {
public:
	C(): noDefault(0) {}
	
private:
	NoDefault noDefault;
};

#endif