MyA operator+(int x,  MyA& myA){
    return myA + x;
    }
///*****************************************************************************************************
///*****************************************************************************************************
MyA::MyA(int x2, int x1, int x0){
    MyAIni(x2, x1, x0);
    }
///*****************************************************************************************************
MyA& MyA::MyAIni(int x2, int x1, int x0){
    this->x2 = x2;
    this->x1 = x1;
    this->x0 = x0;
    SetCrC();
    return *this;
    }
///*****************************************************************************************************
MyA MyA::operator+(const MyA& myA){
    return MyA(this->x2 + myA.x2, this->x1 + myA.x1,this->x0 + myA.x0);
    }
///*****************************************************************************************************
MyA MyA::operator+(int x){
    return MyA(this->x2 + x, this->x1 + x,this->x0 + x);
    }
///*****************************************************************************************************
MyA& MyA::operator++(){
    ++x2;
    ++x1;
    ++x0;
    SetCrC();
    return  *this;
    }
///*****************************************************************************************************
MyA MyA::operator++(int){
    MyA myA(x2,x1,x0);
    ++x2;
    ++x1;
    ++x0;
    SetCrC();
    return  myA;
    }
///*****************************************************************************************************
int MyA::GetX2(){return x2;}
int MyA::GetX1(){return x1;}
int MyA::GetX0(){return x0;}
int MyA::GetCrC(){return cRc;}
///*****************************************************************************************************
int MyA::SetX2(int x){
    int tmp = x2;
    x2 = x;
    SetCrC();
    return tmp;
    }
///*****************************************************************************************************
int MyA::SetX1(int x){
    int tmp = x1;
    x1 = x;
    SetCrC();
    return tmp;
    }
///*****************************************************************************************************
int MyA::SetX0(int x){
    int tmp = x0;
    x0 = x;
    SetCrC();
    return tmp;
    }
///*****************************************************************************************************
int MyA::CrC(){
    return 4*(x2%2) +2*(x1%2) + x0%2;
    }
///*****************************************************************************************************
int MyA::SetCrC(){
    cRc = CrC();
    return cRc;
    }
///*****************************************************************************************************
ostream& operator<<(ostream& s, MyA& myA){
    s<<"( "<<myA.GetX2()<<", "<<myA.GetX1()<<", "<<myA.GetX0();
    s<<") -> "<<myA.GetCrC();
    return s;
    }
///*****************************************************************************************************
istream& operator>>(istream& s, MyA& myA){
    myA.SetX2(MyRead("x2? = ", s));
    myA.SetX1(MyRead("x1? = ", s));
    myA.SetX0(MyRead("x0? = ", s));
    return s;
    }