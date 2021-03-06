#define L_LOG " Log: "
#define L_N "\n"
#define L_FATAL "Fataler Fehler: "
#define L_ACL_LIST_RECURSE "Konnte keine ip ACL Liste fuer rekursive Anfragen erstellen"
#define L_INIT_SPAMMERS "Konnte Spammers Liste nicht erstellen"
#define L_RANDOM_IF_RECURSE "random_seed_file muss definiert sein wenn rekursives DNS aktiviert ist"
#define L_INVALID_CACHESIZE "maximum_cache_size hat eine ungueltigen Wert. Verwende den Standard Wert."
#define L_BIND2ADDR "Anschluss an Adresse "
#define L_CAUGHT_PIPE "SIGPIPE empfangen"
#define L_CAUGHT_SIG "Signal empfangen "
#define L_BAD_QUERY "Falsche Anfrage empfangen: "
#define L_SYSERROR "System sagte"
#define L_MLC "Konnte mararc_loc Zeichenkette nicht erstellen"
#define L_MLL "Konnte locale fuer mararc_loc Zeichenkette nicht setzen"
#define L_EC "Konnte keinen Fehler Zeichenkette erstellen"
#define L_EL "Konnte locale fuer Fehler Zeichenkette nicht setzen"
#define L_UC "Konnte keine uidstr Zeichenkette erstellen"
#define L_UL "Konnte locale fuer uidstr Zeichenkette nicht setzen"
#define L_VC "Konnte keine verbstr Zeichnekette erstellen"
#define L_VL "Konnte locale fuer verbstr Zeichenkettte nicht setzen"
#define L_MC "Konnte maxpstr Zeichenkette nicht erstellen"
#define L_ML "Konnte locale fuer maxpstr Zeichenkette nicht setzen"
#define L_CC "Konnte chrootn Zeichnekette nicht erstellen"
#define L_CL "Konnte locale fuer chrootn Zeichenkette nicht setzen"
#define L_KQC "Konnte kvar_query Zeichenkette nicht erstellen"
#define L_KQL "Konnte locale fuer kvar_query Zeichenkette nicht setzen"
#define L_BAC "Konnte bins_address Zeichenkette nicht erstellen"
#define L_BAL "Konnte loocale fuer bind_address Zeichenkette nicht setzen"
#define L_IC "Konnte incoming Zeichenkette nicht erstellen"
#define L_IL "Konnte locale fuer incoming Zeichenkette nicht setzen"
#define L_UCC "Konnte uncomp Zeichenkette nicht erstellen"
#define L_UCL "Konnte locale fuer uncomp Zeichenkette nicht setzen"
#define L_LOC_MARARC "Fehler beim Auffinden von mararc Datei"
#define L_MARARC_ARG "Konnte mararc nicht von der Kommando-Zeile erhalten"
#define L_USAGE "Benutzung: mararc [-f mararc_Ort]"
#define L_MARARC_PARSE "Fehler beim Lesen des Inhalt der mararc Datei"
#define L_MARARC_LINE "Fehler beim Lesen des Inhalt der mararc Datei in Zeile "
#define L_ERROR_CODE "Fehler Nummer"

#define L_KVAR_Q "Konnte kvar_query nicht erstellen"
#define L_MAXPROC "Problem beim Lesen von maxprocs Wert.\nmaxprocs muss gesetzt werden bevor der MaraDNS Server gestartet wird"
#define L_MAXPROC_NUM "Problem beim Konvertieren von maxprocs zu einer Zahl\nDiese Zahl muss ungleich Null sein"
#define L_MAXPROC_SET "Kann maximale Anzahl von Prozessen nicht definieren"
#define L_MAXPROC_MAX "maxprocs can nicht groesse als 5000 sein\nSetze maxprocs auf 5000"
#define L_CHROOT_KVAR "Problem beim Lesen von chroot kvar.\nSie muessen chroot_dir setzen, wenn Sie dies als root starten"
#define L_CHROOT_NT "Problem beim Erstellen der chroot nt Zeichenkette\nStellen Sie sicher das das chroot Verzeichnis 200 Zeichen or weniger lang ist."
#define L_CHROOT_CHANGE "Problem beim Wechsel in chroot Verzeichnis.\nStellen Sie sicher, dass chroot_dir auf ein gueltiges Verzeichnis zeigt"
#define L_CHROOT_DO "Problem beim Wechsel des Wurzel-Verzeichnis"
#define L_CHROOT_SUCCESS "Wurzel Verzeichnis gewechselt"
#define L_NOBIND "Problem beim Lesen von chroot kvar.\nSie muessen bind_address setzen, um die IP zu definieren auf der maradns laeuft"
#define L_BINDFAIL "Problem beim Anschluss an Port 53.\nWahrscheinlich nutzt schon eine anderer Prozess Port 53"
#define L_BIND_SUCCESS "Socket auf UDP Port 53 geoeffnet"
#define L_NOUID "Problem beim Lesen von maradns_uid kvar.\nSie muessen maradns_uid definieren, wenn sie dies als root starten"
#define L_BADUID "maradns_uid ist kleiner als 10 oder keine Zahl.\nDiese UID muss einen Wert groesser 10 haben"
#define L_NODROP "Konnte root UID nicht aufgeben"
#define L_STILL_ROOT "Wir sind anscheinend immer noch root"
#define L_DROP_SUCCESS "Root Privilegien aufgegeben"
#define L_BEROOT "Probleme bei Anschluss an Port 53.\nSie muessen dies als root starten"
#define L_NOBIGHASH "Konnte keinen grossen Hash erstellen"
#define L_NOPOPULATE "Fehler beim Ausfuehren von populate_main. Bitte lesen sie die MaraDNS FAQ"
#define L_POPULATE_FATAL "Dieser Fehler in populate hash ist fatal"
#define L_RRS_LOADED "Alle RRs wurden geladen"
#define L_DATAWAIT "Warten auf Daten auf Port 53"
#define L_GOTDATA "Nachricht empfangen, am verarbeiten"
#define L_INITCACHE_FAIL "Init_cache() fehlgeschlagen. Wenn Sie dies sehen, ist es ein Fehler.\nBitte lesen Sie die MaraDNS FAQ"
#define L_ERROR_VALUE "Fehler Nummer (fuer die Entwickler): "
#define L_INITCRYPTO_FAIL "Init_crypto() fehlgeschlagen. Wenn Sie dies sehen, ist es ein Fehler.\nBitte lesen Sie die MaraDNS FAQ"
#define L_OPENSEED_FAIL "Konnte random_seed_file nicht oeffenen"
#define L_NEED16BYTES "Das random_seed_file muss 16 Bytes oder laenger sein"
#define L_THISIS "Dies ist MaraDNS Version"
#define L_COMPILED "Kompiliert auf einem"
#define L_RTFM "Fuer Benutzungs Informationen 'man maradns'"
#define L_SETROOTNS "root_servers[\".\"] oder upstream_servers[\".\"] muessen in der\nmararc Datei gesetzt werden\nz.B. root_servers[\".\"] = \"198.41.0.4\"\nZusaetzlich muss root_servers = {} (oder upstream_servers = {}) vor dieser Zeile stehen"
#define L_BADROOTNS "root_servers[\".\"] in der mararc Datei ist ungueltig.\nBeispiel: root_servers[\".\"] = \"198.41.0.4\""
#define L_CHOOSEONE "Sowohl root_servers als auch upstream_servers wurde in der mararc Datei definiert\nBitte waehlen Sie eine davon aus, da nicht beide zur selben Zeit genutzt werden koennen."
#define L_INVALID_MAXGLUE "max_glueless_level muss eine Zahl und groesser Null sein"
#define L_INVALID_MAXQTOTAL "max_queries_total muss eine Zahl und groesser Null sein"
#define L_INVALID_TIMEOUT "timeout_seconds muss eine Zahl und groesser als Null sein"
#define L_TIMESTAMP "Zeit Stempel: "
#define L_COMPRESS_ERROR "Kompressions Fehler: "
