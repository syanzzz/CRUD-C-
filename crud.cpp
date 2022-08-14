#include<iostream>
using namespace std;
class MAHASISWA
{
 int NO;
 char Nama[40];
 char Jurusan[40];
 char Kelas[40];
 public:



	// Menambahkan
 	int Insert(MAHASISWA *p,int n)
	{
	cout<<"Masukkan NO: ";
	cin>>p[n].NO;
	cout<<"Masukkan Nama: ";
	cin>> p[n].Nama;
	cout<< "Masukkan Jurusan: ";
	cin>> p[n].Jurusan;
	cout<<"Masukkan Kelas: ";
	cin>> p[n].Kelas;
	cout<<"\nRECORD Berhasil Ditambahkan...\n";
	n++;
	return n;
	}





	// Menampilkan
	void Display(){
	cout<<NO<<	"	\t"<<Nama<<	"	\t"<<Jurusan<<"	\t"<<Kelas<<"\n";
	}




	// Delete
	int Del(MAHASISWA *p,int n,int NO)
	{
		int j=0,k,i=0;
		for(j=0;j<n;j++)
		{
			if(p[j].NO==NO)
            {
                i=1;
                break;
            }
		}
        if(i==1)
        {
            for(k=j;k<n;k++)
            {
            p[k]=p[k+1];
            }
            cout<<"\nRECORD BERHASIL DIHAPUS.\n";
            return n-1;
        }
			else
			{
				cout<<"\nRECORD TIDAK DITEMUKAN.\n";
				return n;
			}
	}




	// Upadate
	int Update(MAHASISWA *p,int NO,int n)
	{
		int i,input;
		for(i=0;i<n;i++)
		{
		if(p[i].NO==NO)
    		{
    			while(1){
    			cout<<"\n!!===UBAH MAHASISWA===!!\n";
				cout<<"\n 1. Ubah Nama";
    			cout<<"\n 2. Ubah Jurusan";
    			cout<<"\n 3. Ubah Kelas";
   				cout<<"\n 4. Ubah Nama, Jurusan Dan Kelas";
   				cout<<"\n 5. Kembali Ke Menu";
   				cout<<"\n\n Masukkan Pilihan:";
   				cin>>input;    				
				switch(input){
					case 1: cout<<"Nama:";
    						cin>>p[i].Nama;
    						cout<<"Record Berhasil Diubah...\n";
    						break;
    				case 2: cout<<"Jurusan:";
    						cin>>p[i].Jurusan;
    						cout<<"Record Berhasil Diubah...\n";
    						break;
   					case 3: cout<<"Kelas:";
   							cin>>p[i].Kelas;
   							cout<<"Record Berhasil Diubah...\n";
   							break; 					
					case 4: cout<<"Nama:";
							cin>>p[i].Nama;
							cout<<"Jurusan:";
							cin>>p[i].Jurusan;
							cout<<"Kelas:";
							cin>>p[i].Kelas;
							cout<<"Record Berhasil Diubah...\n";
							break;
					case 5: return n;
					default: cout<<"!! Wrong Key !!";
							break;
					}
				}
			break;
    		}
		}
    		if(p[i].NO!=NO)
		{
    		cout<<"\nRecord Tidak Ditemukan\n\n";
		}
	}
};




int main()
{
 MAHASISWA o[50];
 int i=0,input,j,NO;
 while(1)
  {
   cout<<"\n!!=== CRUD MAHASISWA ===!!";
   cout<<"\n";
   cout<< "\n 1.TAMBAH MAHASISWA";
   cout<< "\n 2.TAMPILKAN";
   cout<< "\n 3.UBAH MAHASISWA";
   cout<< "\n 4.HAPUS MAHASISWA";
   cout<< "\n 5.Keluar";
   cout<< "\n\n Masukkan Pilihan:";
   cin>> input;
   switch(input){

	   //Create
     case 1: i=o[0].Insert(o,i);
               break;
			
		//Read
     case 2: cout<<"=========================================================\nNO	\tNama	\tJurusan	\tKelas\n=========================================================\n";
		for(j=0;j<i;j++){
		o[j].Display();
		}
		break;

		// Upadate
	 case 3:
	 	cout<<"Masuukan Number Untuk Data Yang Ingin Diubah:";
		cin>> NO;
		i=o[0].Update(o,NO,i);
		break;

		//Delete
	case 4:
		cout<<"Masukkan Number Untuk Menghapus:";
		cin>> NO;
		i=o[0].Del(o,i,NO);
		break;
	 default: 
	 cout<<"Wrong Key!!";
	 		break;
     case 5: exit(0);
	 
    }
  }

 }