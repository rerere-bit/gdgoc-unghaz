# 1) Variabel
nama = "Muhammad Zarrar"
umur = 19           # integer
tinggi_cm = 175.9   # float
ada_pacar = False   # boolean

print(f"Nama: {nama}")
print(f"Umur: {umur} tahun, Tinggi: {tinggi_cm} cm")
print(f"Ada pacar? {'Ya' if ada_pacar else 'Tidak'}\n")

# 2) Operator (aritmatika dan perbandingan singkat)
a = 10
b = 3
print("-- Operator --")
print(f"{a} + {b} = {a + b}")
print(f"{a} - {b} = {a - b}")
print(f"{a} * {b} = {a * b}")
print(f"{a} / {b} = {a / b:.2f}  (pembagian biasa)")
print(f"{a} // {b} = {a // b}  (pembagian bulat)")
print(f"{a} % {b} = {a % b}  (sisa bagi)")
print(f"{a} ** {b} = {a ** b}  (pangkat)")
print(f"{a} > {b}? {a > b}")
print(f"'Muhammad' in nama? {'Muhammad' in nama}\n")

# 3) Branching (if / elif / else)
print("-- Branching --")
if umur >= 21:
    status = "Dewasa penuh (>=21)"
elif umur >= 18:
    status = "Dewasa (18-20)"
else:
    status = "Belum dewasa"
print(f"Status umur: {status}")

# contoh gabungan kondisi
if umur >= 18 and ada_pacar:
    print("Boleh ikut acara khusus untuk dewasa dengan pasangan.")
else:
    print("Tidak memenuhi syarat acara pasangan dewasa.\n")

# 4) Looping: for dan while
print("-- Looping for --")
hobi = ["ngoding", "main gitar", "ngopi"]
for i, h in enumerate(hobi, start=1):
    print(f"{i}. {h}")

print("\n-- Looping while --")
count = 1
while count <= 5:
    if count == 3:
        print("melewati nomor 3 (continue)")
        count += 1
        continue
    print(f"Perulangan ke-{count}")
    if count == 4:
        print("berhenti lebih awal (break)")
        break
    count += 1

