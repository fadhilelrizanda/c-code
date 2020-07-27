//* adding lib
#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

//*function
void ganjilGenap();
void passwordCheck();
void namaHari();
void codeToDay(int kodeHari);
void dayToCode(string namaHari);
void golonganKaryawan();
void golToSalary();
void errorChoice();
void salToGolongan();
void waterMark();

//*Variable And Array
map<string, int> hariCode{{"Senin", 1}, {"Selasa", 2}, {"Rabu", 3}, {"Kamis", 4}, {"Jumat", 5}, {"Sabtu", 6}, {"Minggu", 7}};
map<string, int> golSalary{{"Non-Staff", 2000000}, {"Staff", 4000000}, {"Supervisor", 9000000}, {"Manager", 14000000}, {"General-Manager", 20000000}};
string hariName[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
string passwordComp = "fadhilElrizanda1234";
int choiceProgram;
int nonStaffSal = 2000000;
int StaffSal = 4000000;
int supervisorSal = 9000000;
int manager = 14000000;
int generalmanager = 20000000;
char YorN;

int main()
{
mulai:
    cout << "Pilih program yang ingin dijalankan" << endl;
    cout << "[1]Menentukan Gaji Karyawan \n[2]Menampilkan Nama Hari\n[3]Pengecekan Password\n[4]Menentukan Bilangan ganjil dan genap" << endl;
    cout << "Masukkan Pilihan Anda ";
    cin >> choiceProgram;

    switch (choiceProgram)
    {
    case 1:
        golonganKaryawan();
        break;
    case 2:
        namaHari();
        break;
    case 3:
        passwordCheck();
        break;
    case 4:
        ganjilGenap();
        break;

    default:
        errorChoice();
        break;
    }
    cout << "Apakah ingin Ke menu utama? y/n ";
    cin >> YorN;
    if (YorN == 'y')
    {
        system("clear");
        goto mulai;
    }
    else
    {
        cout << "Program Selesai" << endl;
        waterMark();
    }
}
void golonganKaryawan()
{
    int golChoice;
    cout << "*****************************************" << endl;
    cout << "Program Check Golongan Karyawan" << endl;
    cout << "*****************************************" << endl;
    cout << "[1]Menentukan Golongan Karyawan dari penghasilan\n[2]Menentukan Penghasilan dari golongan Karyawan" << endl;
    cin >> golChoice;
    switch (golChoice)
    {
    case 1:
        cout << "Menentukan Golongan Karyawan dari penghasilan " << endl;
        golToSalary();
        break;
    case 2:
        cout << "Menentukan Penghasilan dari Golongan Pekerjaan" << endl;
        salToGolongan();
    default:

        break;
    }
}
void golToSalary()
{
    int salary;
    cout << "Masukkan Penghasilan : ";
    cin >> salary;
    if (salary <= nonStaffSal)
    {
        cout << "Gologanan Non Staff" << endl;
    }
    else if (salary <= StaffSal && salary > nonStaffSal)
    {
        cout << "Gologanan Staff" << endl;
    }
    else if (salary <= supervisorSal && salary > StaffSal)
    {
        cout << "Gologanan Supervisor" << endl;
    }
    else if (salary <= manager && salary > supervisorSal)
    {
        cout << "Gologanan Manager" << endl;
    }
    else if (salary <= generalmanager && salary > manager)
    {
        cout << "Gologanan General Manager" << endl;
    }
    else if (salary >= generalmanager)
    {
        cout << "Gologanan di atas General Manager" << endl;
    }
    else
    {
        cout << "Golongan tidak ditemukan" << endl;
    }
}

void salToGolongan()
{
    string salToGolChoice;
    cout << "Non-Staff\nStaff\nSupervisor\nManager\nGeneral-Manager" << endl;
    cout << "Masukkan Golongan yang akan di cek penghasilannya" << endl;
    cin >> salToGolChoice;
    if (salToGolChoice == "Non-Staff" or salToGolChoice == "Staff" or salToGolChoice == "Supervisor" or salToGolChoice == "Manager" or salToGolChoice == "General-Manager")
    {
        cout << "Rata-rata gaji golongan " << salToGolChoice << " adalah : " << golSalary[salToGolChoice] << endl;
    }
    else
    {
        errorChoice();
    }
}

void namaHari()
{
    int hari;
    int choiceHari;
    string namaHari;
    cout << "*****************************************" << endl;
    cout << "Program Check Nama Hari" << endl;
    cout << "*****************************************" << endl;
    cout << "[1]Kode 1-7 untuk nama hari\n[2]Menentukan kode dari nama hari" << endl;
    cout << "Pilih program yang akan dijalankan ";
    cin >> choiceHari;
    switch (choiceHari)
    {
    case 1:
        cout << "*****************************************" << endl;
        cout << "Program Kode ke Hari" << endl;
        cout << "*****************************************" << endl;
        cout << "Masukkan kode hari ";
        cin >> hari;
        codeToDay(hari);

        break;
    case 2:
        cout << "*****************************************" << endl;
        cout << "Program Hari ke Kode" << endl;
        cout << "*****************************************" << endl;
        cout << "Masukkan nama hari ";
        cin >> namaHari;
        if (namaHari == "Senin" or namaHari == "Selasa" or namaHari == "Rabu" or namaHari == "Kamis" or namaHari == "Jumat" or namaHari == "Sabtu" or namaHari == "Minggu")
        {
            dayToCode(namaHari);
        }
        else
        {
            cout << "Nama hari yang dimasukkan salah (pastikan menggunakan kapital)" << endl;
        }

        break;
    default:
        errorChoice();
        break;
    }
}

void codeToDay(int kodeHari)
{
    cout << "Hari yang dipilih adalah hari " << hariName[kodeHari - 1] << endl;
}
void dayToCode(string namaHari)
{
    cout << "Kode hari adalah " << hariCode[namaHari] << endl;
}

void passwordCheck()
{
    char pwdChoice;
pwd:
    string password;
    cout << "*****************************************" << endl;
    cout << "Program Check Password" << endl;
    cout << "*****************************************" << endl;
    cout << "Masukkan password Anda yang akan di cek ";
    cin >> password;
    if (password == passwordComp)
    {
        cout << "Password yang anda masukkan benar" << endl;
    }
    else
    {
        cout << "Password yang anda masukkan salah" << endl;
        cout << "Ulangi? y/n ";
        cin >> pwdChoice;
        if (pwdChoice == 'y' || 'Y')
        {
            system("clear");
            goto pwd;
        }
        else
        {
            cout << "Keluar dari menu password" << endl;
        }
    }
}

void ganjilGenap()
{
    int angka;
    cout << "*****************************************" << endl;
    cout << "Program ganjil genap" << endl;
    cout << "*****************************************" << endl;
    cout << "Masukkan Angka yang akan di cek ";
    cin >> angka;
    if (angka % 2 == 1)
    {
        cout << angka << " Merupakan angka ganjil" << endl;
    }
    else
    {
        cout << angka << " Merupakan angka genap" << endl;
    }
}

void errorChoice()
{
    cout << "Pilihan Anda tidak ditemukan 404 " << endl;
}
void waterMark()
{
    cout << "************************************" << endl;
    cout << "By Fadhil Elrizanda" << endl;
    cout << "************************************" << endl;
}