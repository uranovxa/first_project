/*
# проверить статус индекса и файлов в Git
git status

# посмотреть список коммитов
git log --oneline

# посмотреть файлы в текущей папке
ls

# переместиться в папку web_pages
cd web_pages/

# создать новую ветку с указанным именем и переключиться на нее
git checkout -b feature/registration_page

# создать файл register.html и открыть его на редактирование
nano register.html

# добавить все изменения в индекс Git
git add .

# закоммитить все изменения из индекса
git commit -m "add register page"

# открыть файл для редактирования
nano register.html
# добавить все изменения в индекс Git
git add .
# закоммитить все изменения из индекса
git commit -m "embed css styles into register page"

# проверить список коммитов в текущей ветке
git log --oneline

# переключиться на ветку master
git checkout master

# посмотреть список файлов
ls

# выполнить слияние ветки (feature/registration_page) с текущей веткой
git merge feature/registration_page

# проверить список коммитов в текущей ветке
git log --oneline
 
*/