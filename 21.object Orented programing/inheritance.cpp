/*Type of inheritance

  1.single inheritance
  2.Multiple inheritance
  3.Multi level inheritance
  4.Hybrid inheritance
  5.Hierarchical inheritance

1,Single inheritance
    Class B -> Class A

    demo code :-
        Class A{
            public:
            void func() {
                cout<<"Inheritance";
            };
            Class B:public A{
            };

            int main(){
                B b;
                b.func();
            }
            
        }

2.Multiple inheritance 
            |--> Class A
    Class C |
            |--> Class B

    demo code :-
        Class A{
            public:
            void funcA() {
                cout<<"Inheritance A";
        };
        Class B{
            public:
            void funcB() {
                cout<<"Inheritance B";
        };
        Class C:public A ,public B{
        };

            int main(){
                C c;
                c.funcA();
                c.funcB();
            }
            
        }
    
3.Multi level inheritance
    Class C -> Class B -> Class A

    demo code :-
        Class A{
            public:
            void funcA(){
                cout<<"func A";
            }
        };
        Class B : public A{
            public :
            void funcB(){
                cout<<"func B" ;
            }
        };
        Class C : public B{
            public :
        };

        int main(){
            C c;
            c.funcB();
            c.funcA();
        }

4.Hybrid inheritance
            |--->Class C
 class D ---|
            |--->Class B --> Class A

    demo code :-
    Class A{
        public:
        void funA(){
            cout<<"func A";
        }
    };
    Class B : public A {
        public:
        void funcB(){
            cout<<"func B";
        }
    };
    Class C {
        public:
        void funcC(){
            cout<<"func C";
        }
    };
    Class D:public C,public B{
        public:
    };

    int main(){
        D d;
        d.funcB();
        d.funcA();
        d.funcC();
    }

5.Hierarchical inheritance 
    Class D  |
             |--->Class B |
    Class E  |            |
                          |------>Class A
    Class F  |            |
             |--->Class C |
    Class G  |
*/