#include <iostream>
using namespace std;

class mahasiswa{
    private:
        static int jmlmhs;
    public:
        string status;
        string nama;
        int nim;
        mahasiswa(string pnama, int pnim){
            status = "Mahasiswa Baru";
            nama = pnama;
            nim = pnim;
            cout << "Mahasiswa dibuat" << endl;
            ++jmlmhs;
        };
        ~mahasiswa(){
            cout << "Mahasiswa dengan nama " << nama << "dihancurkan" << endl;
            -- jmlmhs;
        };
        static int gettotalmhs(){
            cout << "Jumlah Mahasiswa = " << jmlmhs << endl;
        };
            
};

int mahasiswa::jmlmhs = 0;

int main(){
    cout  << "Jumlah Mahasiswa = " << mahasiswa::gettotalmhs() << endl; 
    mahasiswa mhs1("Rudy", 28);
    mahasiswa mhs2("Joko", 73);
    mahasiswa mhs3("Tony", 69);
    cout  << "Jumlah Mahasiswa = " << mahasiswa::gettotalmhs() << endl; 
    {
        mahasiswa mhs4("Tio", 98);
        cout  << "Jumlah Mahasiswa = " << mahasiswa::gettotalmhs() << endl; 
    }
    cout  << "Jumlah Mahasiswa = " << mahasiswa::gettotalmhs() << endl; 
    return 0;
}