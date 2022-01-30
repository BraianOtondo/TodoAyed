   #include <iostream>
       using namespace std;
       int main() {
              int* data = new int();
             *data = 14;
             int* data_aux;
             data_aux = data;

             delete data_aux;
             delete data;
             cout << data << endl;
             cout << *data_aux << endl;
             delete data;
             delete data_aux;
            cout << data << endl;
             cout << *data_aux << endl;
             return 0;
        }
