# Busqueda de teatros

Sistemas que va a mostrar al usuario las posibles opciones de teatros que hay en la Republica teniendo alguna referencia.

## Como obtener el codigo

```shell
#Para usuarios que no sean propietarios o que no tengan configurado la ssh key
$ git clone https://github.com/KevyJQ/teatro_db.git
$ cd teatro_db
```
Si tienes configurado la llave ssh, utiliza este comando

```shell
#Para el propietario y tienes la llave ssh
$ git clone git@github.com:KevyJQ/teatro_db.git 
```

Este comando create un directory llamado `teatro_db`.

> Nota: informacion de como configurar la llave ssh esta https://docs.github.com/en/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent 

## Como ver informacion del projecto

```shell
$ git branch
* main
$ git branch -va
* main                e5fca6a Descripcion del sistema
  remotes/origin/HEAD -> origin/main
  remotes/origin/main e5fca6a Descripcion del sistema`
```

## Como subir nuevo codigo

Primero agrega los archivos al cache de git.

```shell
$ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

    modified:   README.md

Untracked files:
  (use "git add <file>..." to include in what will be committed)

    src/teatro_algoritmos.h

no changes added to commit (use "git add" and/or "git commit -a")

# Agrega los archivos nuevos y modicados
$ git add README.md
$ git add src/teatro_algoritmos.h

$ git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

    modified:   README.md
    new file:   src/teatro_algoritmos.h
```

Haz push de tus cambios

```shell
$ git remote -v
origin  https://github.com/KevyJQ/teatro_db.git (fetch)
origin  https://github.com/KevyJQ/teatro_db.git (push)

# El asterisco indica el branch que estas utilizando.
$ git branch -va
* main                e5fca6a Descripcion del sistema
  remotes/origin/HEAD -> origin/main
  remotes/origin/main e5fca6a Descripcion del sistema

# Comando: git push remote_repo remote_branch_name:local_branch_name
$ git push origin main:main
```


