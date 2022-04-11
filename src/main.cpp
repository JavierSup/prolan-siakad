#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas jav ier" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " tenaga kependidikan" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:

			{
				int dd, mm, yy, tahunmasuk,nomorhp,semesterke,skslulus;
				string id, nama, nrp, departemen, alamat,email;

				stringstream cd;
				cd << 1 + recMhs.size();
				id = cd.str();
				
				cout<<"Nama :";
				cin.ignore();
				getline(cin, nama);

				cout<<"Tanggal lahir :";
				cin>>dd;
				cout<<"Bulan lahir :";
				cin>>mm;
				cout<<"Tahun lahir:";
				cin>>yy;
				cout<<"Alamat :";
				cin.ignore();
				getline(cin, alamat);
				cout<<"Nomor HP :";
				cin>>nomorhp;
				cout<<"Alamat surel :";
				cin>>email;
				cout<<"NRP :";
				cin>>nrp;
				cout<<"Departemen :";
				cin.ignore();
				getline(cin, departemen);
				cout<<"Tahun masuk :";
				cin>>tahunmasuk;
				cout<<"Semester ke :";
				cin>>semesterke;
				cout<<"Jumlah SKS :";
				cin>>skslulus;

				mahasiswa mahasiswa(id,nama,dd,mm,yy,nomorhp,alamat,email,nrp,departemen,tahunmasuk,semesterke,skslulus);
				
				recMhs.push_back(mahasiswa);
				
				system ("cls");
			}
				break;
			case 2:
			{
				string id, nama, npp, departemen,alamat,email;
				int dd, mm, yy, pendidikan,nomorhp;
				stringstream sd;
				sd << 1 + recDosen.size();
				id = sd.str();
				
				cout<<"Nama :";
				cin.ignore();
				getline(cin, nama);
				cout<<"Tanggal lahir :";
				cin>>dd;
				cout<<"Bulan lahir :";
				cin>>mm;
				cout<<"Tahun lahir:";
				cin>>yy;
				cout<<"Alamat :";
				cin.ignore();
				getline(cin, alamat);
				cout<<"Nomor HP :";
				cin>>nomorhp;
				cout<<"Alamat surel :";
				cin>>email;
				cout<<"NPP :";
				cin>>npp;
				cout<<"Departemen :";
				cin.ignore();
				getline(cin, departemen);
				cout<<"Pendidikan tertinggi :";
				cin>>pendidikan;
				

				dosen dsn(id, nama, dd, mm, yy, nomorhp,npp,departemen,pendidikan,alamat,email);
				recDosen.push_back(dsn);
				system ("cls");
			
				}
				break;
			case 3:
			{
				int dd, mm, yy, nomorhp;
				string id, nama, npp, alamat,email, unit;

				stringstream td;
				td << 1 + recTendik.size();
				id = td.str();
				
				cout<<"Nama :";
				cin.ignore();
				getline(cin, nama);

				cout<<"Tanggal lahir :";
				cin>>dd;
				cout<<"Bulan lahir :";
				cin>>mm;
				cout<<"Tahun lahir:";
				cin>>yy;
				cout<<"Nomor HP :";
				cin>>nomorhp;
				cout<<"NPP :";
				cin>>npp;
				cout<<"Jabatan :";
				cin>>unit;
				cout<<"Alamat :";
				cin.ignore();
				getline(cin, alamat);
				cout<<"Alamat surel :";
				cin>>email;
				
				
				tendik tendik(id,nama,dd,mm,yy,nomorhp,npp,unit,alamat,email);
				recTendik.push_back(tendik);
				system ("cls");
			}
				break;
			case 4:
			{
				for(unsigned long i=0; i< recMhs.size(); i++)
				{
					cout << "ID: " << recMhs[i].getId() << endl;
					cout << "Nama Mahasiswa: " << recMhs[i].getNama() << endl;
					cout << "Tanggal lahir: " << recMhs[i].getTglLahir() << "-"<< recMhs[i].getBulanLahir()<<"-"<<recMhs[i].getTahunLahir()<<endl;
					cout << "Alamat :"<< recMhs[i].getAlamat()<< endl;
					cout << "Nomor HP :"<< recMhs[i].getNomorHP()<< endl;
					cout << "Alamat Email :"<< recMhs[i].getEmail()<< endl;
					cout << "NRP :"<< recMhs[i].getnrp()<< endl;
					cout << "Departemen :"<< recMhs[i].getDepartemen()<<endl;
					cout << "Tahun masuk :"<< recMhs[i].getTahunmasuk()<<endl;
					cout << "Semester :"<< recMhs[i].getSemester()<< endl;
					cout << "Jumlah SKS :"<< recMhs[i].getSKSLulus()<<endl;

				}
			}
				break;
			case 5:
			{
				for(unsigned long i=0; i< recDosen.size(); i++)
				{
					cout << "ID: " << recDosen[i].getId() << endl;
					cout << "Nama dosen: " << recDosen[i].getNama() << endl;
					cout << "Tanggal lahir: " << recDosen[i].getTglLahir() << "-"<< recDosen[i].getBulanLahir()<<"-"<<recDosen[i].getTahunLahir()<<endl;
					cout << "Alamat :"<< recDosen[i].getAlamat()<< endl;
					cout << "Nomor HP :"<< recDosen[i].getNomorHP()<< endl;
					cout << "Alamat Email :"<< recDosen[i].getEmail()<< endl;
					cout << "NPP : " << recDosen[i].getnpp() << endl;
					cout << "Departemen :" << recDosen[i].getDepartemen()<<endl;
					cout << "Pendidikan :" << recDosen[i].getPendidikan()<<endl;
			
				}
			}
				break;
			case 6:
						{
				for(unsigned long i=0; i< recTendik.size(); i++)
				{
					cout << "ID: " << recTendik[i].getId() << endl;
					cout << "Nama tendik: " << recTendik[i].getNama() << endl;
					cout << "Tanggal lahir: " << recTendik[i].getTglLahir() << "-"<< recTendik[i].getBulanLahir()<<"-"<<recTendik[i].getTahunLahir()<<endl;
					cout << "Alamat :"<< recTendik[i].getAlamat()<< endl;
					cout << "Nomor HP :"<< recTendik[i].getNomorHP()<< endl;
					cout << "Alamat Email :"<< recTendik[i].getEmail()<< endl;
					cout << "NPP :"<< recTendik[i].getNPP()<< endl;
					cout << "Unit :"<< recTendik[i].getUnit()<< endl;
			
				}
			}
				break;
		}
	}

	return 0;
}
