#include <iostream>
#include <cmath>

using namespace std;

// Fungsi Bangun Datar
float luasPersegi(float s)
{
    return s * s;
}
float luasPersegiPanjang(float p, float l)
{
    return p * l;
}
float luasSegitiga(float a, float t)
{
    return 0.5 * a * t;
}
float luasLingkaran(float r)
{
    return M_PI * r * r;
}
float luasTrapesium(float a, float b, float t)
{
    return 0.5 * (a + b) * t;
}
float luasBelahKetupat(float d1, float d2)
{
    return 0.5 * d1 * d2;
}

// Fungsi Bangun Ruang
float volumeKubus(float s)
{
    return s * s * s;
}
float volumeBalok(float p, float l, float t)
{
    return p * l * t;
}
float volumePrisma(float a, float t)
{
    return a * t;
}
float volumeLimas(float a, float t)
{
    return (1.0 / 3) * a * t;
}
float volumeBola(float r)
{
    return (4.0 / 3) * M_PI * pow(r, 3);
}
float volumeTabung(float r, float t)
{
    return M_PI * r * r * t;
}

void menuBangunDatar()
{
    int pilih;
    cout << "\n======================================\n";
    cout << "      PILIH BANGUN DATAR      \n";
    cout << "======================================\n";
    cout << "1. Luas Persegi\n";
    cout << "2. Luas Persegi Panjang\n";
    cout << "3. Luas Segitiga\n";
    cout << "4. Luas Lingkaran\n";
    cout << "5. Luas Trapesium\n";
    cout << "6. Luas Belah Ketupat\n";
    cout << "======================================\n";
    cout << "Pilih Rumus : ";
    cin >> pilih;

    float a, b, t, r;
    switch (pilih)
    {
    case 1:
        cout << "Masukkan sisi: ";
        cin >> a;
        cout << "Luas Persegi: " << luasPersegi(a) << endl;
        break;
    case 2:
        cout << "Masukkan panjang dan lebar: ";
        cin >> a >> b;
        cout << "Luas Persegi Panjang: " << luasPersegiPanjang(a, b) << endl;
        break;
    case 3:
        cout << "Masukkan alas dan tinggi: ";
        cin >> a >> t;
        cout << "Luas Segitiga: " << luasSegitiga(a, t) << endl;
        break;
    case 4:
        cout << "Masukkan jari-jari: ";
        cin >> r;
        cout << "Luas Lingkaran: " << luasLingkaran(r) << endl;
        break;
    case 5:
        cout << "Masukkan sisi atas, sisi bawah, dan tinggi: ";
        cin >> a >> b >> t;
        cout << "Luas Trapesium: " << luasTrapesium(a, b, t) << endl;
        break;
    case 6:
        cout << "Masukkan diagonal 1 dan diagonal 2: ";
        cin >> a >> b;
        cout << "Luas Belah Ketupat: " << luasBelahKetupat(a, b) << endl;
        break;
    default:
        cout << "Pilihan tidak valid.\n";
    }
}

void menuBangunRuang()
{
    int pilih;
    cout << "\n======================================\n";
    cout << "      PILIH BANGUN RUANG      \n";
    cout << "======================================\n";
    cout << "1. Volume Kubus\n";
    cout << "2. Volume Balok\n";
    cout << "3. Volume Prisma\n";
    cout << "4. Volume Limas\n";
    cout << "5. Volume Bola\n";
    cout << "6. Volume Tabung\n";
    cout << "======================================\n";
    cout << "Pilih Rumus : ";
    cin >> pilih;

    float a, b, t, r;
    switch (pilih)
    {
    case 1:
        cout << "Masukkan sisi: ";
        cin >> a;
        cout << "Volume Kubus: " << volumeKubus(a) << endl;
        break;
    case 2:
        cout << "Masukkan panjang, lebar, dan tinggi: ";
        cin >> a >> b >> t;
        cout << "Volume Balok: " << volumeBalok(a, b, t) << endl;
        break;
    case 3:
        cout << "Masukkan luas alas dan tinggi: ";
        cin >> a >> t;
        cout << "Volume Prisma: " << volumePrisma(a, t) << endl;
        break;
    case 4:
        cout << "Masukkan luas alas dan tinggi: ";
        cin >> a >> t;
        cout << "Volume Limas: " << volumeLimas(a, t) << endl;
        break;
    case 5:
        cout << "Masukkan jari-jari: ";
        cin >> r;
        cout << "Volume Bola: " << volumeBola(r) << endl;
        break;
    case 6:
        cout << "Masukkan jari-jari dan tinggi: ";
        cin >> r >> t;
        cout << "Volume Tabung: " << volumeTabung(r, t) << endl;
        break;
    default:
        cout << "Pilihan tidak valid.\n";
    }
}

int main()
{
    int pilih;
    cout << "======================================\n";
    cout << "  KALKULATOR BANGUN DATAR & RUANG  \n";
    cout << "======================================\n";
    cout << "1. Bangun Datar\n";
    cout << "2. Bangun Ruang\n";
    cout << "======================================\n";
    cout << "Pilih Kalkulator : ";
    cin >> pilih;

    if (pilih == 1)
    {
        menuBangunDatar();
    }
    else if (pilih == 2)
    {
        menuBangunRuang();
    }
    else
    {
        cout << "Pilihan tidak valid.\n";
    }
    return 0;
}
