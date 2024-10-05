print("Kasir Perusahaan Boneka\n")

boneka = int(input("Masukkan Jumlah Pembelian Boneka\t: "))

if boneka < 1:
    print("\nError\n")
elif boneka <= 12:
    print("\nHarga Perboneka Rp20.000\n")
    harga = 20000
elif boneka <= 24:
    print("\nHarga Perboneka Rp19.500\n")
    harga = 19500
elif boneka <= 50:
    print("\nHarga Perboneka Rp18.000\n")
    harga = 18000
else:
    print("\nHarga Perboneka Rp17.000\n")
    harga = 17000
bayar = boneka * harga

print("Total Bayar = Rp",bayar)
