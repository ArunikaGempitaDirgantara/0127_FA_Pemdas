#include <iostream>
#include <string>
using namespace std;

class MasukUniversitas {
// isi access modifier disini
private:
// isi daftar variable yang dibutuhkan di bawah ini
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
	string kategori;
	string status;


public:
	MasukUniversitas() {
// isi nilai default variable yang dibutuhkan di bawah ini
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
		kategori;
		status;
	}

// isi disini dengan fungsi virtual yang dibutuhkan
	virtual void namaJalurMasuk() { return; }
	virtual int hitungTotalBiaya() { return; }
	virtual void tampilkanTotalBiaya() = 0;
	virtual void input() = 0;

// isi setter dan getter variable yang dibutuhkan di bawah ini
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}

	void setUangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}
	float getUangSemesterPertama() {
		return uangSemesterPertama;
	}

	void setUangBangunan(int nilai) {
		this->uangBangunan = nilai;
	}
	float getUangBangunan() {
		return uangBangunan;
	}

	void setTotalBiaya(int nilai) {
		this->totalBiaya = nilai;
	}
	float getTotalBiaya() {
		return totalBiaya;
	}

	void setKategori(string Katagori) {
		this->kategori = Katagori;
	}
	string getKategori() {
		return kategori;
	}

	void setStatus(string statUS) {
		this->kategori = statUS;
	}
	string getStatus() {
		return status;
	}

};
class SNBT : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBT
public:
	void namaJalurMasuk() override;
	int hitungTotalBiaya() override;
	void tampilkanTotalBiaya() override;
	void input() override;

	void namaJalurMasuk() {
		cout << "SNBT" << endl;
	}
	void Input() {
		int nilai;
		cout << "Masukkan uang pendaftaran : ";
		cin >> nilai;
		setUangPendaftaran(nilai);
		cout << "Masukkan uang semester pertama : ";
		cin >> nilai;
		setUangSemesterPertama(nilai);
		cout << "Masukkan uang bangunan : ";
		cin >> nilai;
		setUangBangunan(nilai);
	}

	int hitungTotalBiaya() {
		return getUangPendaftaran() + getUangSemesterPertama() + getUangBangunan();
	}

	void tampilkanTotalBiaya() {
		int total = hitungTotalBiaya();
		cout << "Total Yang Harus Dibayarkan = " << total <<endl;

		//Masih Error
		if (total > 45100000) {
			getKategori = "Mahal";
			getStatus = "Tidak Direkomendasikan";
		}
		else (total >= 45100000) {
			getKategori = "Mahal";
			getStatus = "Tidak Direkomendasikan";
		}
		else (total < 45100000) {
			getKategori = "Murah";
			getStatus = "Direkomendasikan"
		}
	}



};
class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
public:
	void namaJalurMasuk() override;
	int hitungTotalBiaya() override;
	void tampilkanTotalBiaya() override;
	void input() override;
};
int main() {
	// isi disini untuk fungsi main
}