waitUntil {!isServer && !isNull player && player isEqualTo player};
if (player diarySubjectExists "rules") exitWith {};

player createDiarySubject ["spacer1","*******************"];
player createDiarySubject ["werbung1","Homepage"];
player createDiarySubject ["werbung2","Teamspeak"];
player createDiarySubject ["spacer2","==================="];
player createDiarySubject ["rules","Grundgesetz"];
player createDiarySubject ["spacer3","==================="];
player createDiarySubject ["farml","Legale Farmrouten"];
player createDiarySubject ["farmi","Illegale Farmrouten"];
player createDiarySubject ["spacer4","==================="];
player createDiarySubject ["updates","ChangeLog"];
player createDiarySubject ["spacer5","==================="];
player createDiarySubject ["controls","Steuerung"];
player createDiarySubject ["spacer6","*******************"];


//Serverinfo													
	player createDiaryRecord["werbung2",
		[
			" ",
				"
<font size='25'>185.101.95.228</font>
				"
		]
	];

	player createDiaryRecord["werbung1",
		[
			" ",
				"
<font size='25'>https://goo.gl/KYCYaf</font>
				"
		]
	];
//Famen Legal
	player createDiaryRecord["farml",
		[
			" ",
				"
<font size='25' color='#00ff00'>Legale Farmrouten</font><br/><br/>
Pfirsiche Farmen an der Pfirsich Plantage, Verkaufen beim Markt ihres Vertrauens.<br/>
Äpfel Farmen an der Apfel Plantage, Verkaufen beim Markt ihres Vertrauens.<br/>
Salz Farmen an der Salzmine, verarbeiten bei er Salzverarbeitung, Verkaufen beim Salz Händler.<br/>
Glas Farmen an der Sand Mine, verarbeiten beim Sand Verarbeiter, Verkaufen beim Glashändler.<br/>
Zement Farmen am Steinbruch, verarbeiten bei der Stein Verarbeitung, Verkaufen beim Zement Händler.<br/>
Kupfer Farmen an der Kupfermine, verarbeiten an der Kupferverarbeitung, Verkaufen beim Eisen & Kupfer Händler.<br/>
Eisen Farmen an der Eisen Mine, verarbeiten an der Eisenverarbeitung, Verkaufen beim Eisen & Kupfer Händler.<br/>
Diamanten Farmen an der Diamanten Mine, verarbeiten beim Diamantenschleifer, Verkaufen beim Juwelier.<br/>
ÖL Farmen bei den ÖL Feldern, verarbeiten beim Öl Verarbeiter, Verkaufen am Ölhändler.<br/>
				"
		]
	];


//Famen Illegal
	player createDiaryRecord["farmi",
		[
			" ",
				"
<font size='25' color='#ff0000'>Illegale Farmrouten</font><br/><br/>
Cannabis Farmen an der Hanf Plantage, Verarbeiten bei der Hanf Verarbeitung, Verkaufen Beim Drogen Dealer<br/>
Heroin Farmen am Schlafmohn Feld, Verarbeiten bei der Heroin Verarbeitung,Verkaufen Beim Drogen Dealer.<br/>
Kokain Farmen an derKoks Plantage, verarbeiten beim Kokain Verarbeiter, Verkaufen Beim Drogen Dealer.<br/>
Schildkröten Tauchen bei der Wilderei für Schildkröten, Verkaufen an Wong´s Spezialitäten.<br/>
				"
		]
	];
//Regeln

	player createDiaryRecord["rules",
		[
			" ",
				"
<font size='25' color='#ffff00'>Server Regeln</font><br/><br/>
Die Server Regeln findet ihr im Forum:</br><font color='#31ada5'>https://goo.gl/KYCYaf</font>
				"
		]
	];


// Sonstiges ---------------------------------

	player createDiaryRecord["updates",
		[
			" ",
				"
<font size='25' color='#ff0000'>ChangeLog</font><br/><br/>
Unseren ChangeLog und weitere Informationen zu UpDates findest du in unserem Forum:<br/> <font color='#31ada5'>https://goo.gl/KYCYaf</font>
				"
		]
	];

	player createDiaryRecord ["controls",
		[
			" ",
				"
<font size='25' color='#ff0000'>• Steuerung •</font><br/><font color='#639C18'>Hier findest du die aktuelle Steuerung die auf unserem Arma3 Life Server gültig ist. Wir gehen von einer deutschsprachigen Tastatur aus. Um von Deutsch auf Englisch (und umgekehrt) zu wechseln, drücke</font><font color='#D66321'> ALT + SHIFT</font><br/><br/>
<font color='#D60000'>Z</font><br/>Spieler-Menü öffnen<br/><br/>
<font color='#D60000'>U</font><br/>Fahrzeuge auf- und zuschließen<br/><br/>
<font color='#D60000'>T</font><br/>Kofferraum öffnen (Z-Items / Virtuelle Items)<br/><br/>
<font color='#D60000'>SHIFT + G</font><br/>Person niederschlagen (MIT WAFFE)<br/><br/>
<font color='#D60000'>WINDOWSTASTE</font><br/>Interaktionsmenü aufrufen<br/>-- Sollte WINDOWSTASTE bei dir nicht funktionieren, öffne dein ESC-Menü > Konfigurieren > Steuerung > Indiv. Steuerung > Aktionstaste 10 anders belegen.<br/><br/>
<font color='#D60000'>WINDOWSTASTE</font><br/>Sammeln<br/><br/>
				"
		]
	];
