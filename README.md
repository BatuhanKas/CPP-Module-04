# CPP-Module-04

Bu projenin amaci size Polymorphism'i ogretmektir. 

## Polymorphism (Çok biçimlilik, Çok çeşitlilik) nedir?
***Polymorphism:*** Bir nesnenin farkli durumlar karsisinda farkli sonuclar, farkli davranislar uretmesidir.

Bu ne demektir;
-   Biz anne babamiz icin bir evladiz, birer cocuguz.
-   Fakat okula gittigimiz zaman ogretmenimiz icin bir ogrenci,
-   Is yerine gittigimiz zaman patronumuz icin bir calisaniz.

Biz kendimizi bir nesne olarak dusunursek, farkli durumlar karsisinda, farkli davranislar sergiliyoruz.

## ***Polymorphism kendi içerisinde ikiye ayrılır;***

***Compile Time Polymorphism:*** Function Overloading && Operator Overloading
***Run Time Polymorphism:*** Function Overriding

***Basit bir Function Overloading ornegi;***
```c++
Student(); 
Student(string, string, int);

A simple function overloading example. 
I can call the Constructor same name but different parameteres. 
That's a simple Function overloading example. 
If you can use the same function with same name but different parameters, 
that's a function overloading.
```

***Bir bir Operator Overloading ornegi;***

```c++
bool Person::operator==(Person &oth) { 
	return (name == oth.name && surname == oth.surname); 
}
// main.cpp dosyasi 
int main() { 
	Person p1("batuhan", "kas", 20); 
	Person p2("muhammet", "mutlu", 26); 
	p1 == p2 ? cout << "Same person" << endl 
			 : cout << "Different Person" << endl; 
	p1.display(); 
}
```
iki objenin isimlerinin ayni olup olmadigini kontrol eden basit bir operator == ornegi.

***Function Overriding;***
	- If you can describing again the same function in inheritence classes, that’s the function overriding.

What i’m gonna say right here?
```c++
class baseClass { 
public: 
	int x; 
	int getx() { return x; }; 
	void setx(int v) { x = v; }; 
}; 
	
class derivedClass : public baseClass { 
public: 
	void setx(int v) { x = v}; 
};
```
Yukarida x degiskenini 2 kez setledim. Bu ise function overriding oluyor.

***Compile Time Polymorphism nedir?***
	- Compile-time polimorfizm, derleme zamanında belirlenen polimorfizmdir. Bu tür polimorfizm, genellikle fonksiyon aşırı yükleme (function overloading) ve operator overloading ile gerçekleşir. 

***Run Time Polymorphism nedir?***
	- Run-time polimorfizm, çalışma zamanında belirlenen polimorfizmdir. Bu tür polimorfizm, genellikle sanal fonksiyonlar (virtual functions) ve kalıtım (inheritance) ile gerçekleştirilir.
	- **Sanal Fonksiyonlar (Virtual Functions):** Sanal fonksiyonlar, bir temel sınıfın bir üye fonksiyonunun türetilmiş sınıflar tarafından geçersiz kılınmasına (override) olanak tanır. Bu, çalışma zamanında hangi fonksiyonun çağrılacağını belirler.

- Farklılıklar:

1.  **Zaman:**
    -   Compile-time polimorfizm derleme zamanında belirlenir.
    -   Run-time polimorfizm çalışma zamanında belirlenir.
2.  **Yöntemler:**
    -   Compile-time polimorfizm, fonksiyon aşırı yükleme ve şablonlar(template)(henüz bilmiyorum) ile gerçekleştirilir.
    -   Run-time polimorfizm, sanal fonksiyonlar ve kalıtım ile gerçekleştirilir.
3.  **Performans:**
    -   Compile-time polimorfizm genellikle daha hızlıdır çünkü kararlar derleme zamanında verilir ve çalışma zamanında ek bir maliyet yoktur.
    -   Run-time polimorfizm daha esnektir ancak çalışma zamanında ek bir maliyet oluşturur çünkü hangi fonksiyonun çağrılacağı dinamik olarak belirlenir.

## **Ex00**

Buranin tum olayi asagida anlattiklarimdir;
Bir fonksiyonun basina virtual keywordu koyarsak ne olur?

- Virtual keyword'u hangi fonksiyonun basina yazilirsa o fonksiyonu sanal bir fonksiyon haline getirir. 
- Virtual olan Fonksiyon cagirildigi zaman "ilgili class'in ilgili fonksiyonunu ya da degiskenini calistir" demek anlamina gelir.

Basit bir ornek ile anlatmak gerekirse;
Class yapisi asagidadir. display fonksiyonu virtual olacak sekilde implemente edilmistir.
```c++
    HEADER DOSYASI(HPP)
    -------------------
    class  Employee {
    public:
	    string  empName,empSur;
	    double  empSalary;
	    Employee(string name,  string surname,  double salary);
	    virtual  ~Employee();
	    virtual  void  display();
    };
    
	class  Manager : public  Employee {
	public:
		string  mngDep;
		Manager(string name,  string surname,  double salary,  string dep);
		~Manager();
		void  display();
		void  increaseSalary() { empSalary  +=  200; };
	};
	
	CPP DOSYASI
    -------------------
	    void  Employee::display() {
	    cout  <<  "-----------"  <<  endl;
	    cout  <<  "Name: "  <<  empName  <<  endl;
	    cout  <<  "SurName: "  <<  empSur  <<  endl;
	    cout  <<  "Salary: "  <<  empSalary  <<  endl;
    }
    
    void  Manager::display() {
	    Employee::display();
	    cout  <<  "Department: "  <<  mngDep  <<  endl;
	    cout <<  "-----------"  << endl;
	}
	
	MAIN DOSYASI
	-------------------
	Employee  *a[] =  {
		new  Employee("Batuhan",  "Kas",  123),
		new  Manager("Musab",  "Kefal",  6666,  "CicekTaksi")
	};
	
	cout  <<  endl  <<  "Reference Parameters: "  <<  endl;
	
	for (int  i  =  0; i  <  2; i++)
		a[i]->display();

```

Yukaridaki Kod blogunda main kisimda bir pointer array actim. Bu arrayin icerisinde Hem Employee'den hem de Manager'dan toplamda 2 adet obje var. Ben display fonksiyonlarini cagirdigim zaman her iki fonksiyonunda kendi display fonksiyonu calisacak. Bunu saglayan sey ise virtual keyword'udur. Cunku yukarida'da belirttigim uzere virtual keyword'u basina geldigi fonksiyonu sanallastirir ve bu fonksiyon cagirildigi zaman icerisinde hangi obje varsa o objenin ilgili fonksiyonunu calistirir. Tum olay bundan ibaret. Eger virtual yazmasaydik a pointeri sadece kendi class'ini gorebildigi icin ve fonksiyonda virtual olmadigi icin Employee sadece kendi display fonksiyonunu calistirirdi ve yanlis bir sonuc alirdik. Bu bilgilerden sonra cok rahat bu egzersizi yaparsiniz diye tahmin ediyorum. Gerekliliklerin hepsi pdf'te yaziyor.


## **Ex01**

Bu kisimda ekstra olarak sadece Beyin Class'ini ekledim. Her bir obje icin 100 arraylik bir yer tutacak sekilde bir string ideas(fikirler) ekledim. Burada artik hayvanlarin beyinleri(pointer) olacak ve beyinlerinde fikirleri olacak. Ben istedigim gibi bu hayvanlara beyin takabiliyorum ve fikirlerini degistirebiliyorum. Buradaki olay ise brain class'ini miras aldirmadan bu islemleri yapmaniz gerekiyor. Her bir kedi ya da kopek olustururken bu beyinler dinamik olarak olusturulacak ve beyinlerle isiniz bittigi zaman duzgun olarak delete'lenecek. Duruma gore Deep Copy veya Shallow Copy yapmaniz gerekecek. Ben burada baya ugrasip guzel seyler cikarttim gerisi sizde. Ha birde mainde bir array ac ve yarisi kedi yarisi kopek olsun demis. Burada ekstra kontrol yapmaniz lazim yarisi dedigine gore tek sayi olmamali degil mi. Ekstra olarak dikkat etmen gereken sey buydu.

**Shallow Copy** ve **Deep Copy** nedir ?

**Shallow copy;** 
Bir nesnenin yalnızca en üst düzeydeki yapılarını kopyalar. Bu, nesnenin içerdiği diğer nesnelere sadece referansları (adresleri) kopyalar, ancak bu alt nesnelerin kendilerini kopyalamaz. Yani, shallow copy ile oluşturulan yeni nesne, orijinal nesne ile aynı alt nesnelere referans(adres) verir.

-   **Avantajları**:

    -   Hızlıdır, çünkü sadece referanslar(adresler) kopyalanır.
    -   Hafızada daha az yer kaplar.
    
-   **Dezavantajları**:
 
    -   Alt nesneler üzerinde yapılan değişiklikler, hem orijinal hem de kopya nesnede yansır. Bu durum, beklenmedik yan etkilere neden olabilir.

Asagida bir ***Shallow Copy*** ornegi bulunmaktadir.
```c++
class MyClass {
public:
	int *data;
	MyClass(int val) { data = new int(val); };
};
    
// main
MyClass obj1(10);
MyClass obj2 = obj1; // Shallow copy
```

### Deep Copy (Derin Kopya)

**Deep copy;** 
Bir nesnenin hem kendisini hem de içindeki tüm alt nesneleri kopyalar. Yani, orijinal nesnenin tam bir bağımsız kopyasını oluşturur. Bu, her seviyedeki nesnelerin yeni bellek adreslerine sahip olmasını sağlar.

-   **Avantajları**:
    
    -   Tam bağımsız bir kopya oluşturur. Alt nesneler üzerinde yapılan değişiklikler orijinal nesneyi etkilemez.
    
-   **Dezavantajları**:
    
    -   Daha yavaştır, çünkü her seviye için yeni bellek tahsisi gerektirir.
    -   Hafızada daha fazla yer kaplar.

Asagida bir ***Deep Copy*** ornegi bulunmaktadir.
```c++
class MyClass {
public:
	int *data;
	MyClass(int val) { data = new int(val); }
	MyClass(const MyClass &other) {
		data = new int(*other.data); // Deep copy
	}
	~MyClass() { delete data; }
};

// main
MyClass obj1(10);
MyClass obj2 = obj1; // Deep copy

```
Buradaki gorsel anlamaniza yardimci olabilir.

![](https://i.hizliresim.com/h58t35q.jpg)

## Ex02

Bu kisimda yapmaniz gereken pek bir sey yok arkadaslar. Eger Ex01'de yapilanlari duzgun ve detayli yaptiysaniz yukarida yaptiklarini bu egzersize kopyala yapistir yapin. Burada Animal Class'ini basina A harfi ekleyerek adini Abstract Animal haline getirmenizi istiyor. Class icerisindede makesound fonksiyonunuza (= 0;) ekleyerek abstract yapacaksiniz. Kodunuzda ilgili yerlerde Animal olan her yeri AAnimal seklinde degistirmeniz gerekiyor. Derlendiginde duzgun bir sekilde calismasi gerekiyor. Eger Ex01'i duzgun bir sekilde yaptiysaniz Ex02'de derlenmesi gerek.

**Abstract Class** nedir?

-   Absract(Soyut) Class, en az bir tane pure virtual function iceren bir siniftir.
-   Örneklendirilemez (direct instance oluşturulamaz. Kisacasi obje uretemeyiz.).
-   Hem sanal hem de sanal olmayan fonksiyonlar içerebilir.
-   Genellikle temel sınıf olarak kullanılır ve türetilmiş sınıflar tarafından miras alınarak tamamlanır.
-   Türetilmiş sınıflar, temel sınıfın sanal fonksiyonlarını (sanal olanlar dahil) yeniden tanımlayabilir.

Bunu size bir ornek ile aciklayacagim. 

Bir hayvan class'imiz oldugunu dusunun. Biz bu hayvan class'ini miras aldirarak kedi ve kopek class'lari olusturacagiz.
Bu hayvan class'i icerisinde kedi ve kopekte ortak olan ozellikleri ekleriz. Gozler, kulaklar, agiz, ayaklar gibi gibi. Sonra bu class'i miras aldirip hayvanlara ozgu ozellikleri kendi class'larinin icerisine ekleme yapariz. Bu sekilde kod karmaşasından kacinmis oluruz. Butun objeleri urettikten sonra bunlari tek bir çatı altında (örn: Hayvan *hayvanptr;) bir hayvan pointerinde butun objeleri tutup yonetebiliriz. Bu kolayligi bize saglar.


## Ex03

Simdi geldik en guzel kisima. Ben yine de bu kisimda aciklama yapacagim fakat daha detayli bir kaynak istiyorsan [notion](https://alike-dirigible-d37.notion.site/CPP-Notlarim-86e5660b50d740b5bd6b8803c8ae99f0?pvs=4) hesabima bakabilirsin. 

Bu egzersizi yapabilmek icin **Pure Abstract Class(*Interface*)** bilmemiz gerekiyor.

**Interface(Pure Abstract Class) nedir?**

-   **Tanım**: Pure abstract class, tüm üye fonksiyonları saf sanal fonksiyon(pure virtual func) olan bir sınıftır.
-   **Özellikler**:
    -   Tamamen arayüz tanımı sağlar, yani sadece fonksiyon bildirimi içerir, ancak hiç uygulama içermez.
    -   Örneklendirilemez.
    -   Sanal olmayan fonksiyon iceremez.
    -   Herhangi bir degisken iceremez.
    -   Türetilmiş sınıflar, tüm saf sanal fonksiyonları gerçekleştirmelidir.
```c++
			class  IAnimal {
			public:
				virtual  void  talk() =  0;
			};

			class  Dog : public IAnimal {
			public:
				void  talk() { cout <<  "Havhav"  << endl; }
			};
			
			class  Cat : public IAnimal {
			public:
				void  talk() { cout <<  "Meow"  << endl; }
			};
			
			class  Duck : public IAnimal {
			public:
				void  talk() { cout <<  "VakVak"  << endl; }
			};
```

Yukarida gordugunuz IAnimal class'i bir interface'dir. Ben bu class'i miras aldirdim ve talk fonksiyonunu gerceklestirdim.
Abstract class ile cok benzer, sadece arayuz tanimliyoruz.

Simdi egzersize gelecek olursak aslinda her seyi pdf'te adim adim anlatiyor. Ben sadece puf noktalara ve anlasilmasi zor olan yerlere değineceğim.

Ice ve Cure' de yapacaginiz Orthodox Canonical Form islemleri Shallow, Character ve MateriaSource classlarinin operator='lerinde ise Deep olacak.

Burada Karakterin 4 tane büyü tutabilen bir envanteri olacak. Burada AMateria'yı inherit ~~aldırmadan~~ yapacaksınız.
Envanterine büyüleri 0'dan 3'e kadar sırayla ekleyecek. Aynı büyü olabilir sorun yok. Boş olan yerlere ekleyeceksiniz.
Main'de büyüleri oluşturduktan sonra direkt olarak karakterin envanterine ekleyip, kuşanıp, kullandirtabilirsiniz. Ya da 4 slotluk envanterinize ekleyip daha sonra envanterden cekip kusanip kullanabilirsiniz. Bu envanterler ilk basta bos olacaklar. Daha sonra buyuleri alacaklar ve en sonunda isimiz bittiginde destructorda deletelenecekler.

Envanter icin learnmateria ve createmateria fonksiyonlari var. 
- LearnMateria az once bahsettigim 4 slotluk buyu cantasi diyebiliriz. Bu cantaya buyuleri learnmateria ile ekliyoruz. 
- CreateMateria fonksiyonu bizden envanterden istedigimiz buyuyu alip kopyasini dondurmemize yariyor. parametre olarak buyunun ismini yolluyoruz ve bize bir deep copy'sini yolluyor. Daha sonra bize donen bu buyuyu karakterin envanterine ekleyip onu kullaniyoruz. 

Ekstradan copy, use, equip, unequip gibi fonksiyonlar var bunlar zaten basit oldugu icin yaparsiniz diye dusunuyorum.
copy kopya dondurecek
equip gonderdigin buyuyu karakterin envanterine kusanacak
unequip karakterin envanterinden buyu cikartacak(YOK ETMEYECEk).
use artik hangi buyu varsa onu kullanacak.

Gerisi Sizde

Size bir gorsel birakacagim cok basit bir gorsel ama ustune siz de katabilirsiniz.

![](https://i.hizliresim.com/mw6mbxj.png)
