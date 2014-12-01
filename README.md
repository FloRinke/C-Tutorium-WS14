#  Aufgabenblätter - Programmieren (C++)

Dieses Repository dient zur Erstellung der Aufgabenblätter für das Tutorium zur Vorlesung "Programmieren" für den Studiengang Sensorik an der Hochschule Karlsruhe.

## minted
Das Paket [minted](http://www.ctan.org/pkg/minted) wird zum Syntax-Highlighting des C++ Codes verwendet. Zur Installation siehe [Paketbeschreibung](http://ftp.fau.de/ctan/macros/latex/contrib/minted/minted.pdf).

Leider unterstützt die derzeit offizielle Version 1.7 noch kein Inline-Highlighting, so dass im Projektverzeichnis die Datei `minted.sty` (derzeitiges v2.0 [Alpha-Release](https://github.com/gpoore/minted/blob/master/README.md)) notwendig ist, um das Kommando `\mintinline{}{}` zu kompilieren. Die Dokumentation zum neuen Release findet sich [hier](https://github.com/gpoore/minted/blob/master/source/minted.pdf).

## \justify
Normalerweise wird Text in `\texttt{foo bar}` nicht umgebrochen. Dies ist durch die Definition von `\justify` jetzt mittels `\texttt{\justify foo bar}` möglich.