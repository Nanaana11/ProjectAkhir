#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Transaksi
{
    string jenis;
    string kategori;
    double jumlah;
};

vector<Transaksi> transaksi;

double hitungTotal(string jenis)
{
    double total = 0;
    for (const auto &t : transaksi)
    {
        if (t.jenis == jenis)
        {
            total += t.jumlah;
        }
    }
    return total;
}

void tambahTransaksi()
{
    Transaksi t;
    cout << "Masukkan jenis (Pemasukan/Pengeluaran): ";
    cin >> t.jenis;
    cout << "Masukkan kategori: ";
    cin >> t.kategori;
    cout << "Masukkan jumlah: ";
    cin >> t.jumlah;
    transaksi.push_back(t);
    cout << "Transaksi berhasil ditambahkan!\n";
}

void lihatLaporan()
{
    if (transaksi.empty())
    {
        cout << "Tidak ada data transaksi.\n";
        return;
    }

    cout << "\nLaporan Keuangan:\n";
    cout << "========================================\n";
    cout << left << setw(15) << "Jenis" << setw(15) << "Kategori" << "Jumlah" << endl;
    cout << "----------------------------------------\n";
    for (const auto &t : transaksi)
    {
        cout << left << setw(15) << t.jenis << setw(15) << t.kategori << "Rp " << t.jumlah << endl;
    }
    cout << "========================================\n";

    double totalPemasukan = hitungTotal("Pemasukan");
    double totalPengeluaran = hitungTotal("Pengeluaran");
    double saldo = totalPemasukan - totalPengeluaran;

    cout << "Total Pemasukan: Rp " << totalPemasukan << endl;
    cout << "Total Pengeluaran: Rp " << totalPengeluaran << endl;
    cout << "Saldo Akhir: Rp " << saldo << endl;
}

void resetData()
{
    transaksi.clear();
    cout << "Semua data transaksi telah dihapus.\n";
}

void tampilkanMenu()
{
    cout << "\n=======================================\n";
    cout << left << setw(38) << "| Menu" << "|" << endl;
    cout << "---------------------------------------\n";
    cout << left << setw(38) << "| 1. Tambah Pemasukan/Pengeluaran" << "|" << endl;
    cout << left << setw(38) << "| 2. Lihat Laporan" << "|" << endl;
    cout << left << setw(38) << "| 3. Reset Data" << "|" << endl;
    cout << left << setw(38) << "| 4. Keluar" << "|" << endl;
    cout << "=======================================\n";
    cout << "Pilih menu: ";
}

int main()
{
    int pilihan;
    do
    {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            tambahTransaksi();
            break;
        case 2:
            lihatLaporan();
            break;
        case 3:
            resetData();
            break;
        case 4:
            cout << "Terima kasih :D\n";
            break;
        default:
            cout << "Pilihan tidak valid, coba lagi.\n";
        }
    } while (pilihan != 4);

    return 0;
}
