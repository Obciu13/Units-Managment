# Units-Managment

Główne zadanie
Zaprojektuj prototyp mechaniki zarządzania jednostkami dla gry strategicznej. Zaimplementuj 3 typy jednostek atakujących: blisko, średnio i długodystansowa. Zasięg każdej z nich to odpowiednio 100, 400 i 700 jednostek unrealowych. Jednostki powinny różnić się między sobą kształtem i na początku wszystkie powinny mieć domyślny kolor biały. Umieść na levelu po 3 obiekty z każdego typu jednostek. Zaimplementuj poruszanie się jednej, dowolnej jednostki po mapie za pomocą klawiszy IKJL. Zaimplementuj cel, który będzie mógł być atakowany przez wszystkie jednostki. Uznajemy że jednostka atakuje cel gdy cel ten znajdzie się w jej zasięgu. Wydrukuj informację do logów o tym która jednostka atakuje jaki cel (możesz użyć po prostu nazw obiektów z levelu).  - DONE

Zadania dodatkowe
- Zaimplementuj główną kamerę, przez którą gracz będzie patrzył z góry na całą mapę (top-down view). Zaimplementuj poruszanie się kamery w płaszczyźnie XY za pomocą klawiszy WSAD. Kamera powinna poruszać się niezależnie od jednostek atakujących. - DONE
- Zaimplementuj zaznaczenie jednostki atakującej poprzez kliknięcie na niej kursorem myszy (lewy przycisk). Wybrana jednostka powinna zmienić swój kolor na zielony. Zaimplementuj odznaczanie wybranej jednostki za pomocą kursora myszy. Jednostka powinna zostać odznaczona gdy gracz kliknie w inną jednostkę w gdy kliknie w obszar, w którym nie ma żadnej jednostki. Odznaczona jednostka powinna wrócić do koloru białego. - DONE
- Zaimplementuj zaznaczanie wielu jednostek poprzez kliknięcie i przeciągnięcie kursora myszy. Podczas przeciągania myszy, obszar zaznaczania powinien się rysować tak aby gracz wiedział, które jednostki zaznacza. Zaznaczone jednostki powinny zmienić swój kolor na zielony. Zaimplementuj odznaczanie wielu jednostek w momencie gdy gracz wciśnie lewy przycisk myszy (pressed). - DONE
- Zaimplementuj poruszanie się jednostek. Gracz wydaje polecenie przemieszczenia się zaznaczonym jednostkom do miejsca wybranego poprzez kliknięcie na mapie (prawy przycisk). Jednostki nie muszą utrzymywać szyku podczas przemieszczania się. - DONE
- Zaimplementuj atakowanie celu. Każda jednostka atakująca, gdy znajdzie się w zasięgu celu, zaczyna atakować go automatycznie. Podczas ataku jednostka wyrzuca z siebie pocisk (mała kula) w stronę celu. Wykorzystaj fizykę z silnika aby zaimplementować ruch pocisku. Pociski powinny reagować tylko na cel. W momencie kontaktu z celem, pociski znikają.
- Zaimplementuj punkty życia celu. Wykorzystaj do tego Gameplay Ability System. Dodaj klasę “HealthAttributeSet” z atrybutami “CurrentHealth” i “MaxHealth”. Początkowo CurrentHealth powinno wynosić 80 jednostek, a MaxHealth 100 jednostek. Przypisz HealthAttributeSet do celu atakowanego przez jednostki. Każdy pocisk, po uderzeniu w cel, zmniejsza “CurrentHealth” o 1. Gdy “CurrentHealth” wyniesie 0, cel znika z mapy a jednostki przestają atakować. Wyświetl “CurrentHealth” w postaci paska nad celem.
- Zaimplementuj jednostkę wroga, która będzie atakować gracza. Jednostka ta jest celem dla gracza (gracz może ją atakować). Początkowo jednostka wroga stoi w miejscu. Uaktywnia się dopiero gdy gracz ją zaatakuje - zaczyna poruszać się w stronę pierwszej jednostki gracza, która go zaatakowała. Gdy jednostka wroga zetknie się z jednostką gracza, obydwie znikają z mapy. - DONE
