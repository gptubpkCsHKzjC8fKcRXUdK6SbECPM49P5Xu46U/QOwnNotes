# Instalar en openSUSE Linux

<installation-opensuse/>

<!-- <Content :page-key="getPageKey($site.pages, '/installation/ubuntu.md')" /> -->


## En cualquier versión de openSUSE

Es posible instalar QOwnNotes a través de la herramienta [Instalador de paquetes OBS](https://github.com/openSUSE/opi).

Ejecute las órdenes de consola siguientes con permisos administrativos para instalar `opi`:

```bash
zypper install opi
```

A continuación, instale QOwnNotes con:

```bash
opi qownnotes
```

::: warning
Esta herramienta efectuará una consulta en la totalidad del servicio OBS, así que cerciórese de elegir `qownnotes`, y no `qownnotes-lang`, si recibe una pregunta.

Además, compruebe que el repositorio elegido sea el oficial, `home:pbek:QOwnNotes`, y no uno de terceros.
:::

::: tip
Marque la opción para conservar el repositorio tras la instalación y así poder recibir actualizaciones.
:::

## openSUSE 13.2

Ejecute las órdenes de consola siguientes con permisos administrativos para añadir el repositorio e instalar QOwnNotes desde allí.

```bash
zypper addrepo -f http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_13.2/home:pbek:QOwnNotes.repo
zypper refresh
zypper install qownnotes
```

[Descarga directa](https://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_13.2)

## openSUSE Leap 15.4

Ejecute las órdenes de consola siguientes con permisos administrativos para añadir el repositorio e instalar QOwnNotes desde allí.

```bash
zypper addrepo -f http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/15.4/home:pbek:QOwnNotes.repo
zypper refresh
zypper install qownnotes
```

[Descarga directa](https://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/15.4)

## openSUSE Leap 15.3

Ejecute los siguientes comandos de shell como root para agregar el repositorio e instalar QOwnNotes desde allí.

```bash
zypper addrepo -f http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_15.3/home:pbek:QOwnNotes.repo
zypper refresh
zypper install qownnotes
```

[Descarga Directa](https://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_15.3)

## openSUSE Leap 15.2

Run the following shell commands as root to add the repository and install QOwnNotes from there.

```bash
zypper addrepo -f http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_15.2/home:pbek:QOwnNotes.repo
zypper refresh
zypper install qownnotes
```

[Direct Download](https://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_15.2)

## openSUSE Leap 15.1

```bash
zypper addrepo -f http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_15.1/home:pbek:QOwnNotes.repo
zypper refresh
zypper install qownnotes
```

[Descarga Directa](https://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_15.1)

## openSUSE Leap 15.0

Run the following shell commands as root to add the repository and install QOwnNotes from there.

```bash
zypper addrepo -f http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_15.0/home:pbek:QOwnNotes.repo
zypper refresh
zypper install qownnotes
```

[Direct Download](https://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_15.0)

## openSUSE Leap 42.3

Run the following shell commands as root to trust the repository.

```bash
su -
rpm --import http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_42.3/repodata/repomd.xml.key
```

Run the following shell commands as root to add the repository and install QOwnNotes from there.

```bash
zypper addrepo -f http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_42.3/home:pbek:QOwnNotes.repo
zypper refresh
zypper install qownnotes
```

[Direct Download](https://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_42.3)

## openSUSE Leap 42.2

Run the following shell commands as root to trust the repository.

```bash
su -
rpm --import http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_42.2/repodata/repomd.xml.key
```

Run the following shell commands as root to add the repository and install QOwnNotes from there.

```bash
zypper addrepo -f http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_42.2/home:pbek:QOwnNotes.repo
zypper refresh
zypper install qownnotes
```

[Direct Download](https://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_42.2)

## openSUSE Leap 42.1

Run the following shell commands as root to trust the repository.

```bash
su -
rpm --import http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_42.1/repodata/repomd.xml.key
```

Ejecute las órdenes de consola siguientes con permisos administrativos para añadir el repositorio e instalar QOwnNotes desde allí.

```bash
zypper addrepo -f http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_42.1/home:pbek:QOwnNotes.repo
zypper refresh
zypper install qownnotes
```

[Descarga directa](https://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Leap_42.1)

## openSUSE Tumbleweed

Ejecute las órdenes de consola siguientes con permisos administrativos para añadir el repositorio e instalar QOwnNotes desde allí.

```bash
zypper addrepo -f http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Tumbleweed/home:pbek:QOwnNotes.repo
zypper refresh
zypper install qownnotes
```

[Descarga directa](https://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/openSUSE_Tumbleweed)


## SLE 12 SP3 Backports

Ejecute los siguientes comandos de shell como root para agregar el repositorio e instalar QOwnNotes desde allí.

```bash
zypper addrepo -f http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/SLE_12_SP3_Backports/home:pbek:QOwnNotes.repo
zypper refresh
zypper install qownnotes
```

[Descarga Directa](https://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/SLE_12_SP3_Backports)

## SLE 15

Run the following shell commands as root to add the repository and install QOwnNotes from there.

```bash
zypper addrepo -f http://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/SLE_15/home:pbek:QOwnNotes.repo
zypper refresh
zypper install qownnotes
```

[Direct Download](https://download.opensuse.org/repositories/home:/pbek:/QOwnNotes/SLE_15)
