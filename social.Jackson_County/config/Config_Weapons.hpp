/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {

    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "RH_gsh18", "", 8000, 625, "" },
            { "RH_g17", "", 5000, 575, "" },
            { "RH_m9", "", 5000, 575, "" },
            { "RH_sw659", "", 4000, 513, "" },
            { "RH_p226", "", 4000, 513, "" },
            { "RH_cz75", "", 3500, 500, "" },
            { "RH_mak", "", 3000, 300, "" },
            { "ACE_EarPlugs", "", 1, -1, "" }
        };
        mags[] = {
            { "RH_18Rnd_9x19_gsh", "", 500, 25, "" },
            { "RH_17Rnd_9x19_g17", "", 500, 20, "" },
            { "RH_15Rnd_9x19_M9", "", 500, 15, "" },
            { "RH_14Rnd_9x19_sw", "", 500, 15, "" },
            { "RH_15Rnd_9x19_SIG", "", 500, 15, "" },
            { "RH_16Rnd_9x19_CZ", "", 500, 10, "" },
            { "RH_8Rnd_9x18_Mak", "", 500, 5, "" }
        };
        accs[] = {
            { "RH_pmIR", "", 1000, 45, "" },
            { "RH_A26", "", 1000, 50, "" },
            { "RH_M6X", "Taschenlampe (klein)", 350, 12, "" }
        };
    };

    class rebel {
        name = "Muhli's Outlaw Laden";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
			//AR10
            { "RH_ar10", "", 95000, -1, "" },
			//Benelli
            { "R3F_M4S90", "", 60000, -1, "" },
			//Ak´s 7.62
            { "hlc_rifle_ak47", "", 80000, -1, "" },
            { "hlc_rifle_akm", "", 82000, -1, "" },
			//Famas
            { "R3F_Famas_surb", "", 65000, -1, "" },
			//Ak´s 5.45
            { "hlc_rifle_ak74", "", 75000, -1, "" },
            { "hlc_rifle_aks74", "", 75000, -1, "" },
            { "hlc_rifle_aek971", "", 75000, -1, "" },
            { "hlc_rifle_aks74u", "", 75000, -1, "" },
            { "hlc_rifle_ak12", "", 75000, -1, "" },
			//Vitor + Samr
            { "RH_SAMR", "", 55000, -1, "" },
            { "RH_M4sbr_b", "", 55000, -1, "" },
			//Scorpion
            { "SMG_02_F", "", 45000, -1, "" },
			//Maschienenpistolen
            { "RH_vz61", "", 30000, -1, "" },
            { "RH_muzi", "", 30000, -1, "" },
			//Pistole mit Schildoption
            { "RH_FNP45", "", 10000, -1, "" },
			//NV-Goggles
            { "TRYK_headset2", "Headset Groß (Nightvision)", 2000, -1, "" },
            { "TRYK_Headset_NV", "Headset Klein (Nightvision)", 1500, -1, "" },
            { "TRYK_Shemagh_G_NV", "Schal Grün (Nightvision)", 5000, -1, "" },
            { "TRYK_Shemagh_TAN_NV", "Schal Tarnfleck (Nightvision)", 5000, -1, "" },
            { "TRYK_Shemagh_WH_NV", "Schal Weis (Nightvision)", 5000, -1, "" },
			//TFAR + ACE + Standart
            { "tf_fadak", "Walkie-Talkie", 1000, -1, "" },
            { "tf_mr3000", "Langstreckenfunk", 5500, -1, "" },
            { "ToolKit", "", 450, -1, "" },
            { "ItemGPS", "", 10, -1, "" },
            { "Binocular", "", 10, -1, "" },
            { "ItemMap", "", 1, -1, "" },
            { "ItemCompass", "", 1, -1, "" },
            { "ACE_fieldDressing", "", 5, -1, "" },
            { "ACE_packingBandage", "", 5, -1, "" },
            { "ACE_tourniquet", "", 120, -1, "" },
            { "ACE_epinephrine", "", 5000, -1, "" },
            { "ACE_morphine", "", 5000, -1, "" },
            { "ACE_Flashlight_MX991", "", 40, -1, "" },
            { "ACE_Flashlight_XL50", "", 40, -1, "" },
            { "ACE_CableTie", "", 25, -1, "" },
            { "ACE_EarPlugs", "", 1, -1, "" }		
        };
        mags[] = {
			//AR10
            { "RH_20Rnd_762x51_AR10", "", 1000, -1, "" },
			//Benelli
            { "R3F_7Rnd_M4S90", "", 1000, -1, "" },
			//Ak´s 7.62
            { "hlc_30Rnd_762x39_b_ak", "", 1000, -1, "" },
			//Famas
            { "R3F_30Rnd_556x45_FAMAS", "", 1000, -1, "" },
			//Ak´s 5.45
            { "hlc_30Rnd_545x39_B_AK", "", 1000, -1, "" },
			//Vitor + Samr
            { "RH_30Rnd_556x45_Mk262", "", 1000, -1, "" },
            { "30Rnd_556x45_Stanag", "", 1000, -1, "" },
			//Scorpion
            { "30Rnd_9x21_Mag", "", 1000, -1, "" },
			//Maschienenpistolen
            { "RH_20Rnd_32cal_vz61", "", 1000, -1, "" },
            { "RH_30Rnd_9x19_UZI", "", 1000, -1, "" },
			//Pistole mit Schildoption
            { "RH_15Rnd_45cal_fnp", "", 500, -1, "" }
        };
        accs[] = {
			//Lee CUT
            { "optic_LRPS", "", 8500, -1, "" },
            { "muzzle_snds_B", "", 8500, -1, "" },
			//HK417
			{ "R3F_SILENCIEUX_HK417", "", 8500, -1, "" },
            { "R3F_POINTEUR_SURB", "", 8500, -1, "" },
            { "R3F_BIPIED_HK417", "", 8500, -1, "" },
			//AR10
            { "RH_Delft", "", 8500, -1, "" },
			//Ak´s 7.62
            { "HLC_Optic_PSO1", "", 9500, -1, "" },
            { "hlc_optic_kobra", "", 9500, -1, "" },
			//Famas
            { "R3F_AIMPOINT", "", 8500, -1, "" },
            { "R3F_J4", "", 8500, -1, "" },
            { "R3F_LAMPE_SURB", "", 8500, -1, "" },
            { "R3F_SILENCIEUX_FAMAS", "", 8500, -1, "" },
			//G36C  CUT
            { "muzzle_snds_M", "", 8500, -1, "" },
			//Ak´s 5.45
            { "HLC_Optic_PSO1", "", 8500, -1, "" },
            { "hlc_optic_kobra", "", 8500, -1, "" },
			//Vitor + Samr
            { "RH_spr_mbs", "", 5500, -1, "" },
            { "RH_qdss_nt4", "", 5500, -1, "" },
            { "RH_eotech553", "", 5500, -1, "" },
            { "RH_ta31rco", "", 5500, -1, "" },
            { "RH_shortdot", "", 5500, -1, "" },
            { "RH_m3lr", "", 5500, -1, "" },
			//Vitor + Samr + Ak12 + G36C Visiere & Aufsätze
            { "optic_Aco_smg", "", 6500, -1, "" },
            { "optic_ACO_grn", "", 6500, -1, "" },
            { "optic_Holosight", "", 6500, -1, "" },
            { "optic_Arco", "", 6500, -1, "" },
            { "optic_Hamr", "", 6500, -1, "" },
            { "optic_MRCO", "", 6500, -1, "" },
            { "optic_DMS", "", 6500, -1, "" },
            { "ACE_acc_pointer_red", "", 5000, -1, "" },
            { "acc_flashlight", "", 5000, -1, "" },
			//Scorpion
            { "muzzle_snds_L", "", 8000, -1, "" },
            { "optic_Hamr", "", 8000, -1, "" },
            { "optic_ACO_grn", "", 8000, -1, "" }			
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "R3F_HK416M", "", 70000, -1, "" },  
            { "R3F_HK417L", "", 70000, -1, "" },					
			{ "RH_bullb", "", 50000, -1, "" },
            { "RH_Deaglem", "", 60000, -1, "" },
            { "RH_fn57", "", 50000, -1, "" },
            { "RH_usp", "", 50000, -1, "" },
            { "RH_m1911", "", 50000, -1, "" },
            { "RH_g18", "", 50000, -1, "" },
            { "RH_vp70", "", 50000, -1, "" },
			//Items
            { "tf_fadak", "Walkie-Talkie", 2500, -1, "" },
            { "tf_mr3000", "Langstreckenfunk", 10000, -1, "" },
            { "ToolKit", "", 1450, -1, "" },
            { "ItemGPS", "", 150, -1, "" },
            { "Binocular", "", 150, -1, "" },
            { "ItemMap", "", 15, -1, "" },
            { "ItemCompass", "", 15, -1, "" },
            { "ACE_fieldDressing", "", 55, -1, "" },
            { "ACE_packingBandage", "", 55, -1, "" },
            { "ACE_tourniquet", "", 1520, -1, "" },
            { "ACE_epinephrine", "", 8000, -1, "" },
            { "ACE_morphine", "", 8000, -1, "" },
            { "ACE_CableTie", "", 55, -1, "" },
            { "ACE_EarPlugs", "", 15, -1, "" }		
        };
        mags[] = {
            { "R3F_30Rnd_556x45_HK416", "", 500, -1, "" },
            { "R3F_20Rnd_762x51_HK417", "", 500, -1, "" },
            { "RH_6Rnd_454_Mag", "", 500, -1, "" },
            { "RH_7Rnd_50_AE", "", 500, -1, "" },
            { "RH_20Rnd_57x28_FN", "", 500, -1, "" },
            { "RH_12Rnd_45cal_usp", "", 500, -1, "" },
            { "RH_7Rnd_45cal_m1911", "", 500, -1, "" },
            { "RH_19Rnd_9x19_g18", "", 500, -1, "" },
            { "RH_18Rnd_9x19_VP", "", 500, -1, "" }
        };
        accs[] = {
            { "RH_demz", "", 5000, -1, "" },
			//HK417
			{ "R3F_SILENCIEUX_HK417", "", 6000, -1, "" },
            { "R3F_POINTEUR_SURB", "", 6000, -1, "" },
            { "R3F_BIPIED_HK417", "", 6000, -1, "" },
			//HK417
            { "optic_Yorris", "", 6000, -1, "" },
            { "RH_vp70stock", "", 6000, -1, "" },
            { "RH_M6X", "Taschenlampe (klein)", 2500, -1, "" }
        };
    };

    class genstore {
        name = "Lakeside General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "tf_fadak", "Walkie-Talkie", 500, -1, "" },
            { "TRYK_G_Shades_Black_NV", "Brille Schwarz (Nightvision)", 120, -1, "" },
            { "TRYK_G_Shades_Blue_NV", "Brille Blau (Nightvision)", 120, -1, "" },
            { "TRYK_Shemagh_G_NV", "Schal Grün (Nightvision)", 120, -1, "" },
            { "TRYK_Shemagh_TAN_NV", "Schal Tarnfleck (Nightvision)", 120, -1, "" },
            { "TRYK_Shemagh_WH_NV", "Schal Weis (Nightvision)", 120, -1, "" },
            { "ACE_fieldDressing", "", 5, -1, "" },
            { "ACE_packingBandage", "", 5, -1, "" },
            { "ACE_EarPlugs", "", 1, -1, "" },		
            { "Binocular", "", 85, -1, "" },
			{ "murshun_cigs_cig0", "", 85, -1, "" },
            { "ItemGPS", "", 20, -1, "" },
            { "ItemMap", "", 1, -1, "" },
            { "ItemCompass", "", 1, -1, "" },
            { "ItemWatch", "", 1, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Lakeside Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "tf_fadak", "Walkie-Talkie", 1000, -1, "" },
            { "TRYK_G_Shades_Black_NV", "Brille Schwarz (Nightvision)", 120, -1, "" },
            { "TRYK_G_Shades_Blue_NV", "Brille Blau (Nightvision)", 120, -1, "" },
            { "TRYK_Shemagh_G_NV", "Schal Grün (Nightvision)", 120, -1, "" },
            { "TRYK_Shemagh_TAN_NV", "Schal Tarnfleck (Nightvision)", 120, -1, "" },
            { "TRYK_Shemagh_WH_NV", "Schal Weis (Nightvision)", 120, -1, "" },
            { "ACE_fieldDressing", "", 5, -1, "" },
            { "ACE_packingBandage", "", 5, -1, "" },
            { "ACE_EarPlugs", "", 1, -1, "" },		
            { "Binocular", "", 85, -1, "" },
            { "ItemGPS", "", 20, -1, "" },
            { "ItemMap", "", 1, -1, "" },
            { "ItemCompass", "", 1, -1, "" },
            { "ItemWatch", "", 1, -1, "" },
            { "Chemlight_red", "", 50, -1, "" },
            { "Chemlight_yellow", "", 50, -1, "" },
			{ "murshun_cigs_cig0", "", 50, -1, "" },
            { "Chemlight_green", "", 50, -1, "" },
            { "Chemlight_blue", "", 50, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class cop_basic {
        name = "LVPD Waffen&Zubehör";
        side = "cop";
        conditions = "";
        items[] = {
			
			//FNP45
            { "RH_fnp45", "", 700, -1, "call life_coplevel >= 1" },
			//Taurus Revolver 
            { "RH_ttracker", "", 725, -1, "call life_coplevel >= 1" },
            //Taser
            { "Taser_26", "Tazer", 250, -1, "call life_coplevel >= 1" },
			//Radar
            { "Radar Gun", "Messgerät", 150, -1, "call life_coplevel >= 1" },
			//Scorpion
            { "SMG_02_F", "", 1250, -1, "call life_coplevel >= 2" },
			//G19
            { "RH_g19", "", 850, -1, "call life_coplevel >= 2" },
			//USP
            { "RH_uspm", "", 800, -1, "call life_coplevel >= 2" },
			//Kimber
            { "RH_kimber_nw", "", 750, -1, "call life_coplevel >= 2" },
			//HK416 14,5
            { "R3F_HK416M", "", 1500, -1, "call life_coplevel >= 3" },
			//M4 Block
            { "RHARD_M4DDRP_F", "", 1600, -1, "call life_coplevel >= 3" },
			//M16A3, M4
            { "RH_M16A3", "", 1500, -1, "call life_coplevel >= 4" },
            { "RH_m4", "", 1500, -1, "call life_coplevel >= 4" },
			//M4A1 RIS, M16A3, M4			
            { "RH_M4A1_ris", "", 1600, -1, "call life_coplevel >= 5" },
			//Benelli
            { "R3F_M4S90", "", 2200, -1, "call life_coplevel >= 4" },		
			//HK417 16
            { "R3F_HK417M", "", 1800, -1, "call life_coplevel >= 6" },
			//FNP45 Schild
            { "KA_FNP45", "SWAT FNP45", 850, -1, "" },	
			
			//Items			
            { "TRYK_Shemagh_WH_NV", "Schal Weis (Nightvision)", 100, -1, "call life_coplevel >= 1" },
            { "tf_anprc148jem_13", "Kurzstreckenfunk", 10, -1, "call life_coplevel >= 1" },
            { "tf_anprc155", "Langstreckenfunk", 50, -1, "call life_coplevel >= 1" },
            { "Laserdesignator", "", 50, -1, "call life_coplevel >= 1" },
            { "Laserbatteries", "", 5, -1, "call life_coplevel >= 1" },
            { "ToolKit", "", 200, -1, "call life_coplevel >= 1" },
            { "ItemGPS", "", 10, -1, "call life_coplevel >= 1" },
            { "Binocular", "", 10, -1, "call life_coplevel >= 1" },
            { "ItemMap", "", 1, -1, "call life_coplevel >= 1" },
            { "ItemCompass", "", 1, -1, "call life_coplevel >= 1" },
            { "TRYK_headset2", "Headset Groß (Nightvision)", 100, -1, "call life_coplevel >= 1" },
            { "TRYK_Headset_NV", "Headset Klein (Nightvision)", 100, -1, "call life_coplevel >= 1" },
			{ "KA_FNP45_shield2", "SWAT FNP45 Schild", 1500, -1, "" },
            { "ItemCopCard", "", 10, -1, "call life_coplevel >= 1" },
            { "ItemDeaCard", "", 10, -1, "call life_coplevel >= 10" },
            { "ItemUnirCard", "", 10, -1, "call life_coplevel >= 12" },
            { "ItemEmsCard", "", 10, -1, "call life_coplevel >= 14" },

			//Ace
            { "ACE_fieldDressing", "", 5, -1, "call life_coplevel >= 1" },
            { "ACE_packingBandage", "", 5, -1, "call life_coplevel >= 1" },
            { "ACE_tourniquet", "", 120, -1, "call life_coplevel >= 1" },
            { "ACE_epinephrine", "", 850, -1, "call life_coplevel >= 1" },
            { "ACE_morphine", "", 850, -1, "call life_coplevel >= 1" },
            { "ACE_Flashlight_MX991", "", 40, -1, "call life_coplevel >= 1" },
            { "ACE_Flashlight_XL50", "", 40, -1, "call life_coplevel >= 1" },
            { "ACE_CableTie", "", 5, -1, "call life_coplevel >= 1" },
            { "ACE_EarPlugs", "", 1, -1, "call life_coplevel >= 1" },
			{ "SmokeShellOrange", "Rauchgranate", 15, -1, "" },
			{ "SmokeShellBlue", "CE-Gas", 15, -1, "" },
			{ "HandGrenade_Stone", "Flashbang", 15, -1, "" }
        };
        mags[] = {
			//FNP45
            { "RH_15Rnd_45cal_fnp", "", 30, -1, "call life_coplevel >= 1" },
			//Taurus Revolver 
            { "RH_6Rnd_45ACP_Mag", "", 32, -1, "call life_coplevel >= 1" },
			//Taser
            { "26_cartridge", "Tazer Mag", 5, -1, "call life_coplevel >= 1" },
			//Scorpion
            { "30Rnd_9x21_Mag", "", 50, -1, "call life_coplevel >= 2" },
			//G19
            { "RH_19Rnd_9x19_g18", "", 45, -1, "call life_coplevel >= 2" },
			//USP
            { "RH_16Rnd_40cal_usp", "", 40, -1, "call life_coplevel >= 2" },
			//Kimber
            { "RH_7Rnd_45cal_m1911", "", 35, -1, "call life_coplevel >= 2" },
			//HK416 14,5
            { "R3F_30Rnd_556x45_HK416", "", 75, -1, "call life_coplevel >= 3" },
			//M4A1 RIS, M16A3, M4			
            { "30Rnd_556x45_Stanag", "", 80, -1, "call life_coplevel >= 3" },
			//Benelli
            { "R3F_7Rnd_M4S90", "", 75, -1, "call life_coplevel >= 4" },
			//HK417 16
            { "R3F_20Rnd_762x51_HK417", "", 100, -1, "call life_coplevel >= 6" },
			{ "KA_15Rnd_45ACP_Mag", "", 95, -1, "" }
        };
        accs[] = {
			//HK417
			{ "R3F_SILENCIEUX_HK417", "", 500, -1, "" },
            { "R3F_POINTEUR_SURB", "", 1750, -1, "" },
            { "R3F_BIPIED_HK417", "", 1750, -1, "" },
			//Aufsätze
            { "RH_docter", "", 100, -1, "call life_coplevel >= 1" },
            { "RH_M6X", "Taschenlampe (klein)", 100, -1, "call life_coplevel >= 1" },
            { "optic_ACO_grn_smg", "", 200, -1, "call life_coplevel >= 2" },
            { "optic_ACO_grn", "", 200, -1, "call life_coplevel >= 2" },
            { "RH_eotech553", "", 350, -1, "call life_coplevel >= 2" },
            { "acc_flashlight", "", 100, -1, "call life_coplevel >= 2" },
            { "optic_Yorris", "", 35, -1, "call life_coplevel >= 3" },
            { "optic_MRCO", "", 400, -1, "call life_coplevel >= 3" },
            { "R3F_AIMPOINT", "", 350, -1, "call life_coplevel >= 3" },
            { "R3F_J4", "", 400, -1, "call life_coplevel >= 3" },
            { "optic_Hamr", "", 400, -1, "call life_coplevel >= 3" },
            { "optic_DMS", "", 400, -1, "call life_coplevel >= 3" },
            { "optic_NVS", "", 500, -1, "call life_coplevel >= 3" },
            { "RH_m3lr", "", 350, -1, "call life_coplevel >= 3" }
        };
    };
	
    class fbi {
        name = "FBI Waffen&Zubehör";
        side = "cop";
        conditions = "license_cop_fbi";
        items[] = {
			
			//FNP45
            { "RH_fnp45", "", 700, -1, "" },
			//Taurus Revolver 
            { "RH_ttracker", "", 725, -1, "" },
            //Taser
            { "Taser_26", "Tazer", 250, -1, "call life_coplevel >= 1" },
			//MP5
            { "arifle_mas_mp5", "", 1250, -1, "" },
			//Scorpion
            { "SMG_02_F", "", 1250, -1, "" },
			//G19
            { "RH_g19", "", 850, -1, "" },
			//USP
            { "RH_uspm", "", 800, -1, "" },
			//Kimber
            { "RH_kimber_nw", "", 750, -1, "" },
			//HK416 14,5
            { "R3F_HK416M", "", 1500, -1, "" },
			//M4 Block
            { "RHARD_M4DDRP_F", "", 1600, -1, "" },
			//M16A3, M4
            { "RH_M16A3", "", 1500, -1, "" },
            { "RH_m4", "", 1500, -1, "" },
			//M4A1 RIS, M16A3, M4			
            { "RH_M4A1_ris", "", 1600, -1, "" },
			//G36A 
            { "CUP_arifle_G36A", "", 775, -1, "" },
			//Benelli
            { "R3F_M4S90", "", 2200, -1, "" },		
			//HK417 16
            { "R3F_HK417M", "", 1800, -1, "" },
			//GSH 18
            { "RH_gsh18", "", 1250, -1, "" },
			//Glock 17
            { "RH_g17", "", 1150, -1, "" },			
			//Beretta m9
            { "RH_m9", "", 1150, -1, "" },			
			//SW659
            { "RH_sw659", "", 1025, -1, "" },			
			//P226
            { "RH_p226", "", 1025, -1, "" },
            //CZ 750
			{ "CUP_srifle_CZ750", "", 2000, -1, "" },
            //L115A5
			{ "CUP_srifle_AWM_wdl", "", 2300, -1, "" },	
            //M14
			{ "srifle_DMR_06_olive_F", "", 2400, -1, "" },	
			//ACE Flashbang
            { "ACE_M84", "M84 Flashbang", 275, 100, "" },
            { "SmokeShellOrange", "Rauchgranate", 15, -1, "" },
            { "SmokeShellBlue", "CE-Gas", 15, -1, "" },
            { "HandGrenade_Stone", "Flashbang", 15, -1, "" },			
			
			//Items			
            { "pmc_earpiece", "Nachtsichtgerät", 100, -1, "" },
            { "tf_anprc148jem_13", "Kurzstreckenfunk", 10, -1, "" },
            { "tf_anprc155", "Langstreckenfunk", 50, -1, "" },
            { "tf_anarc164", "FBI Langstreckenfunk", 50, -1, "" },
            { "tf_fadak", "Ziviler Kurzstreckenfunk", 50, -1, "" },			
            { "Laserdesignator", "", 50, -1, "" },
            { "Laserbatteries", "", 5, -1, "" },
            { "ToolKit", "", 200, -1, "" },
            { "ItemGPS", "", 10, -1, "" },
            { "Binocular", "", 10, -1, "" },
            { "ItemMap", "", 1, -1, "" },
            { "ItemCompass", "", 1, -1, "" },
            { "TRYK_headset2", "Headset Groß (Nightvision)", 100, -1, "" },
            { "TRYK_Headset_NV", "Headset Klein (Nightvision)", 100, -1, "" },
            { "TRYK_Shemagh_G_NV", "Schal Grün (Nightvision)", 100, -1, "" },
            { "TRYK_Shemagh_TAN_NV", "Schal Tarnfleck (Nightvision)", 100, -1, "" },
            { "TRYK_Shemagh_WH_NV", "Schal Weis (Nightvision)", 100, -1, "" },
			{ "TRYK_G_Shades_Black_NV", "Brille Schwarz (Nightvision)", 100, -1, "" },	
			{ "TRYK_G_Shades_Blue_NV", "Brille Blau (Nightvision)", 100, -1, "" },		

			//Ace
            { "ACE_fieldDressing", "", 5, -1, "" },
            { "ACE_packingBandage", "", 5, -1, "" },
            { "ACE_tourniquet", "", 120, -1, "" },
            { "ACE_epinephrine", "", 850, -1, "" },
            { "ACE_morphine", "", 850, -1, "" },
            { "ACE_Flashlight_MX991", "", 40, -1, "" },
            { "ACE_Flashlight_XL50", "", 40, -1, "" },
            { "ACE_CableTie", "", 5, -1, "" },
            { "ACE_EarPlugs", "", 1, -1, "" }
        };
        mags[] = {
			//FNP45
            { "RH_15Rnd_45cal_fnp", "", 30, -1, "" },
			//Taurus Revolver 
            { "RH_6Rnd_45ACP_Mag", "", 32, -1, "" },
			//Taser
            { "26_cartridge", "Tazer Mag", 5, -1, "call life_coplevel >= 1" },
			//MP5
            { "R3F_30Rnd_9x19_MP5", "", 50, -1, "" },
			//Scorpion
            { "30Rnd_9x21_Mag", "", 50, -1, "" },
			//G19
            { "RH_19Rnd_9x19_g18", "", 45, -1, "" },
			//USP
            { "RH_16Rnd_40cal_usp", "", 40, -1, "" },
			//Kimber
            { "RH_7Rnd_45cal_m1911", "", 35, -1, "" },
			//HK416 14,5
            { "R3F_30Rnd_556x45_HK416", "", 75, -1, "" },
			//M4A1 RIS, M16A3, M4			
            { "30Rnd_556x45_Stanag", "", 80, -1, "" },
			//HK MK23 
            { "12Rnd_mas_45acp_Mag", "", 38, -1, "" },
			//Benelli
            { "R3F_7Rnd_M4S90", "", 75, -1, "" },
			//Smith & Wesson Revolver 		
            { "6Rnd_45ACP_Cylinder", "", 50, -1, "" },
			//HK417 16
            { "R3F_20Rnd_762x51_HK417", "", 100, -1, "" },
			//GSH 18
            { "RH_18Rnd_9x19_gsh", "", 50, -1, "" },
			//Glock 17		
            { "RH_17Rnd_9x19_g17", "", 45, -1, "" },
			//Beretta m9
            { "RH_15Rnd_9x19_M9", "", 40, -1, "" },
			//SW659
            { "RH_14Rnd_9x19_sw", "", 35, -1, "" },
			//P226	
            { "RH_15Rnd_9x19_SIG", "", 35, -1, "" },
			//CZ750
			{ "CUP_10Rnd_762x51_CZ750", "", 35, -1, "" },
			//L115A5
			{ "CUP_5Rnd_86x70_L115A1", "", 35, -1, "" },
			//M14
			{ "20Rnd_762x51_Mag", "", 35, -1, "" }	
        };
        accs[] = {
			//HK417
			{ "R3F_SILENCIEUX_HK417", "", 500, -1, "" },
            { "R3F_POINTEUR_SURB", "", 1750, -1, "" },
            { "R3F_BIPIED_HK417", "", 1750, -1, "" },
			//Aufsätze
            { "RH_docter", "", 100, -1, "" },
            { "RH_M6X", "Taschenlampe (klein)", 100, -1, "" },
            { "optic_ACO_grn_smg", "", 200, -1, "" },
            { "optic_ACO_grn", "", 200, -1, "" },
            { "optic_mas_Holosight_blk", "", 200, -1, "" },
            { "RH_eotech553", "", 350, -1, "" },
            { "optic_mas_acog_eo", "", 350, -1, "" },
            { "acc_flashlight", "", 100, -1, "" },
            { "acc_mas_flash_gun", "", 25, -1, "" },
            { "optic_Yorris", "", 35, -1, "" },
            { "optic_MRCO", "", 400, -1, "" },
            { "R3F_AIMPOINT", "", 350, -1, "" },
            { "R3F_J4", "", 400, -1, "" },
            { "optic_Hamr", "", 400, -1, "" },
            { "optic_DMS", "", 400, -1, "" },
            { "optic_NVS", "", 500, -1, "" },
            { "RH_m3lr", "", 350, -1, "" },
			{ "muzzle_snds_L", "", 250, -1, "" },
			{ "RH_qdss_nt4", "", 400, -1, "" },
			{ "R3F_SILENCIEUX_HK416", "", 400, -1, "" },
			{ "R3F_SILENCIEUX_HK417", "", 400, -1, "" },
			{ "muzzle_MK18_L", "", 250, -1, "" },
			{ "RH_spr_mbs", "", 400, -1, "" },
			{ "optic_mas_LRPS", "", 500, -1, "" },
			{ "muzzle_mas_snds_SH", "", 500, -1, "" },
			{ "KA_FNP45_Flashlight", "SWAT FNP45 Flashlight", 50, -1, "" },
			{ "KA_red", "SWAT FNP45 RedDot", 120, -1, "" },
			{ "KA_FNP45_shield2", "SWAT FNP45 Schild", 1500, -1, "" },
			{ "ACE_M84", "", 300, -1, "" }
        };
    };	
    class Swat {
        name = "SWAT Waffen&Zubehör";
        side = "cop";
        conditions = "license_cop_swat";
        items[] = {
			
			//FNP45
            { "RH_fnp45", "", 700, -1, "" },
			//Taurus Revolver 
            { "RH_ttracker", "", 725, -1, "" },
			//Taser
            { "Taser_26", "Tazer", 250, -1, "call life_coplevel >= 1" },
			//MP5
            { "arifle_mas_mp5", "", 1250, -1, "" },
			//Scorpion
            { "SMG_02_F", "", 1250, -1, "" },
			//G19
            { "RH_g19", "", 850, -1, "" },
			//USP
            { "RH_uspm", "", 800, -1, "" },
			//Kimber
            { "RH_kimber_nw", "", 750, -1, "" },
			//HK416 14,5
            { "R3F_HK416M", "", 1500, -1, "" },
			//M4 Block
            { "RHARD_M4DDRP_F", "", 1600, -1, "" },
			//M16A3, M4
            { "RH_M16A3", "", 1500, -1, "" },
            { "RH_m4", "", 1500, -1, "" },
			//M4A1 RIS, M16A3, M4			
            { "RH_M4A1_ris", "", 1600, -1, "" },
			//HK MK23 
            { "hgun_mas_m23_F", "", 775, -1, "" },
			//Benelli
            { "R3F_M4S90", "", 2200, -1, "" },
			//Smith & Wesson Revolver 
            { "hgun_007_SW_M10", "", 900, -1, "" },			
			//HK417 16
            { "R3F_HK417M", "", 1800, -1, "" },
			//HK417 20
            { "R3F_HK417L", "", 1800, -1, "" },		
			//GSH 18
            { "RH_gsh18", "", 1250, -1, "" },
			//Glock 17
            { "RH_g17", "", 1150, -1, "" },			
			//Beretta m9
            { "RH_m9", "", 1150, -1, "" },			
			//SW659
            { "RH_sw659", "", 1025, -1, "" },			
			//P226
            { "RH_p226", "", 1025, -1, "" },					
			//MK12
            { "RH_Mk12mod1", "", 1650, -1, "" },			
			//LRR AWM
            { "srifle_mas_lrr", "", 1750, -1, "" },						
			//FNP45 Schild
            { "KA_FNP45", "SWAT FNP45", 850, -1, "" },	
            //CZ 750
			{ "CUP_srifle_CZ750", "", 2000, -1, "" },
            //L115A5
			{ "CUP_srifle_AWM_wdl", "", 2300, -1, "" },	
            //M14
			{ "srifle_DMR_06_olive_F", "", 2400, -1, "" },	
			//ACE Flashbang
            { "ACE_M84", "M84 Flashbang", 275, 100, "" },	
            { "SmokeShellOrange", "Rauchgranate", 15, -1, "" },
            { "SmokeShellBlue", "CE-Gas", 15, -1, "" },
            { "HandGrenade_Stone", "Flashbang", 15, -1, "" },			
			
			//Items			
            { "pmc_earpiece", "Nachtsichtgerät", 100, -1, "" },
			{ "NVGoggles_OPFOR", "SWAT NV", 150, -1, "" },
            { "tf_anprc148jem_13", "Kurzstreckenfunk", 10, -1, "" },
            { "tf_anprc155", "Langstreckenfunk", 50, -1, "" },
            { "tf_anarc164", "FBI Langstreckenfunk", 50, -1, "" },
            { "tf_fadak", "Ziviler Kurzstreckenfunk", 50, -1, "" },			
            { "Laserdesignator", "", 50, -1, "" },
            { "Laserbatteries", "", 5, -1, "" },
            { "ToolKit", "", 200, -1, "" },
            { "ItemGPS", "", 10, -1, "" },
            { "Binocular", "", 10, -1, "" },
            { "ItemMap", "", 1, -1, "" },
            { "ItemCompass", "", 1, -1, "" },
            { "TRYK_headset2", "Headset Groß (Nightvision)", 100, -1, "" },
            { "TRYK_Headset_NV", "Headset Klein (Nightvision)", 100, -1, "" },
            { "TRYK_Shemagh_G_NV", "Schal Grün (Nightvision)", 100, -1, "" },
            { "TRYK_Shemagh_TAN_NV", "Schal Tarnfleck (Nightvision)", 100, -1, "" },
            { "TRYK_Shemagh_WH_NV", "Schal Weis (Nightvision)", 100, -1, "" },
			{ "TRYK_G_Shades_Black_NV", "Brille Schwarz (Nightvision)", 100, -1, "" },	
			{ "TRYK_G_Shades_Blue_NV", "Brille Blau (Nightvision)", 100, -1, "" },
		

			//Ace
            { "ACE_fieldDressing", "", 5, -1, "" },
            { "ACE_packingBandage", "", 5, -1, "" },
            { "ACE_tourniquet", "", 120, -1, "" },
            { "ACE_epinephrine", "", 850, -1, "" },
            { "ACE_morphine", "", 850, -1, "" },
            { "ACE_Flashlight_MX991", "", 40, -1, "" },
            { "ACE_Flashlight_XL50", "", 40, -1, "" },
            { "ACE_CableTie", "", 5, -1, "" },
            { "ACE_EarPlugs", "", 1, -1, "" }
        };
        mags[] = {
			//FNP45
            { "RH_15Rnd_45cal_fnp", "", 30, -1, "" },
			//Taurus Revolver 
            { "RH_6Rnd_45ACP_Mag", "", 32, -1, "" },
			//Taser
            { "26_cartridge", "Tazer Mag", 5, -1, "call life_coplevel >= 1" },
			//MP5
            { "30Rnd_mas_9x21_Stanag", "", 50, -1, "" },
			//Scorpion
            { "30Rnd_9x21_Mag", "", 50, -1, "" },
			//G19
            { "RH_19Rnd_9x19_g18", "", 45, -1, "" },
			//USP
            { "RH_16Rnd_40cal_usp", "", 40, -1, "" },
			//Kimber
            { "RH_7Rnd_45cal_m1911", "", 35, -1, "" },
			//HK416 14,5
            { "R3F_30Rnd_556x45_HK416", "", 75, -1, "" },
			//M4A1 RIS, M16A3, M4			
            { "30Rnd_556x45_Stanag", "", 80, -1, "" },
			//HK MK23 
            { "12Rnd_mas_45acp_Mag", "", 38, -1, "" },
			//Benelli
            { "R3F_7Rnd_M4S90", "", 75, -1, "" },
			//Smith & Wesson Revolver 		
            { "6Rnd_45ACP_Cylinder", "", 50, -1, "" },
			//HK417 20
            { "R3F_20Rnd_762x51_HK417", "", 100, -1, "" },
			//GSH 18
            { "RH_18Rnd_9x19_gsh", "", 50, -1, "" },
			//Glock 17
            { "RH_17Rnd_9x19_g17", "", 45, -1, "" },
			//Beretta m9		
            { "RH_15Rnd_9x19_M9", "", 40, -1, "" },
			//SW659		
            { "RH_14Rnd_9x19_sw", "", 35, -1, "" },
			//P226		
            { "RH_15Rnd_9x19_SIG", "", 35, -1, "" },			
			//MK12		
            { "RH_30Rnd_556x45_Mk262", "", 75, -1, "" },
			//LRR AWM	
            { "10Rnd_mas_338_Stanag", "", 900, -1, "" },			
			//FNP45 Schild		
            { "KA_15Rnd_45ACP_Mag", "", 95, -1, "" },
			//CZ750
			{ "CUP_10Rnd_762x51_CZ750", "CUP_10Rnd_762x51_CZ750_Tracer", 35, -1, "" },
			//L115A5
			{ "CUP_5Rnd_86x70_L115A1", "", 35, -1, "" },
			//M14
			{ "20Rnd_762x51_Mag", "", 35, -1, "" }			
        };
        accs[] = {
			//HK417
			{ "R3F_SILENCIEUX_HK417", "", 500, -1, "" },
            { "R3F_POINTEUR_SURB", "", 1750, -1, "" },
            { "R3F_BIPIED_HK417", "", 1750, -1, "" },	
			//Aufsätze
            { "RH_docter", "", 100, -1, "" },
            { "RH_M6X", "Taschenlampe (klein)", 100, -1, "" },
            { "optic_ACO_grn_smg", "", 200, -1, "" },
            { "optic_ACO_grn", "", 200, -1, "" },
            { "optic_mas_Holosight_blk", "", 200, -1, "" },
            { "RH_eotech553", "", 350, -1, "" },
            { "optic_mas_acog_eo", "", 350, -1, "" },
            { "acc_flashlight", "", 100, -1, "" },
            { "acc_mas_flash_gun", "", 25, -1, "" },
            { "optic_Yorris", "", 35, -1, "" },
            { "optic_MRCO", "", 400, -1, "" },
            { "R3F_AIMPOINT", "", 350, -1, "" },
            { "R3F_J4", "", 400, -1, "" },
            { "optic_Hamr", "", 400, -1, "" },
            { "optic_DMS", "", 400, -1, "" },
            { "optic_NVS", "", 500, -1, "" },
            { "RH_m3lr", "", 350, -1, "" },
			{ "muzzle_snds_L", "", 250, -1, "" },
			{ "RH_qdss_nt4", "", 400, -1, "" },
			{ "R3F_SILENCIEUX_HK416", "", 400, -1, "" },
			{ "R3F_SILENCIEUX_HK417", "", 400, -1, "" },
			{ "muzzle_MK18_L", "", 250, -1, "" },
			{ "RH_spr_mbs", "", 400, -1, "" },
			{ "optic_mas_LRPS", "", 500, -1, "" },
			{ "muzzle_mas_snds_SH", "", 500, -1, "" },
			{ "KA_FNP45_Flashlight", "SWAT FNP45 Flashlight", 50, -1, "" },
			{ "KA_red", "SWAT FNP45 RedDot", 120, -1, "" },
			{ "KA_FNP45_shield2", "SWAT FNP45 Schild", 1500, -1, "" },
			{ "ACE_M84", "", 300, -1, "" }
        };
    };		
	    class cop_sheriff {
        name = "Sheriff";
        side = "cop";
        conditions = "license_cop_sheriff";
        items[] = {
			
			//FNP45
            { "RH_fnp45", "", 700, -1, "call life_coplevel >= 1" },
			//Taurus Revolver 
            { "RH_ttracker", "", 725, -1, "call life_coplevel >= 1" },
            //Taser
            { "Taser_26", "Tazer", 250, -1, "call life_coplevel >= 1" },
			//G19
            { "RH_g19", "", 850, -1, "call life_coplevel >= 1" },
			//USP
            { "RH_uspm", "", 800, -1, "call life_coplevel >= 1" },
			//Kimber
            { "RH_kimber_nw", "", 750, -1, "call life_coplevel >= 1" },
			//M4 Block
            { "RHARD_M4DDRP_F", "", 1600, -1, "call life_coplevel >= 1" },
			//M16A3, M4
            { "RH_m4", "", 1500, -1, "call life_coplevel >= 1" },
			//M4A1 RIS, M16A3, M4			
            { "RH_M4A1_ris", "", 1600, -1, "call life_coplevel >= 1" },
			//Benelli
            { "R3F_M4S90", "", 2200, -1, "call life_coplevel >= 1" },
            //CZ 750
			{ "CUP_srifle_CZ750", "", 2000, -1, "call life_coplevel >= 1" },
            //L115A5
			{ "CUP_srifle_AWM_wdl", "", 2300, -1, "call life_coplevel >= 1" },	
            //M14
			{ "srifle_DMR_06_olive_F", "", 2400, -1, "call life_coplevel >= 1" },	
			//ACE Flashbang
            { "ACE_M84", "M84 Flashbang", 275, 100, "" },	
            { "SmokeShellOrange", "Rauchgranate", 15, -1, "" },
            { "SmokeShellBlue", "CE-Gas", 15, -1, "" },
            { "HandGrenade_Stone", "Flashbang", 15, -1, "" },				

			//Items			
	        { "pmc_earpiece", "Nachtsichtgerät", 100, -1, "" },
            { "TRYK_Shemagh_WH_NV", "Schal Weis (Nightvision)", 100, -1, "call life_coplevel >= 1" },
            { "tf_anprc148jem_13", "Kurzstreckenfunk", 10, -1, "call life_coplevel >= 1" },
            { "tf_anprc155", "Langstreckenfunk", 50, -1, "call life_coplevel >= 1" },
            { "Laserdesignator", "", 50, -1, "call life_coplevel >= 1" },
            { "Laserbatteries", "", 5, -1, "call life_coplevel >= 1" },
            { "ItemGPS", "", 10, -1, "call life_coplevel >= 1" },
            { "Binocular", "", 10, -1, "call life_coplevel >= 1" },
            { "ItemMap", "", 1, -1, "call life_coplevel >= 1" },
            { "ItemCompass", "", 1, -1, "call life_coplevel >= 1" },
            { "TRYK_headset2", "Headset Groß (Nightvision)", 100, -1, "call life_coplevel >= 1" },
            { "TRYK_Headset_NV", "Headset Klein (Nightvision)", 100, -1, "call life_coplevel >= 1" },
            { "ItemCopCard", "", 10, -1, "call life_coplevel >= 1" },

			//Ace
            { "ACE_fieldDressing", "", 5, -1, "call life_coplevel >= 1" },
            { "ACE_packingBandage", "", 5, -1, "call life_coplevel >= 1" },
            { "ACE_tourniquet", "", 120, -1, "call life_coplevel >= 1" },
            { "ACE_epinephrine", "", 850, -1, "call life_coplevel >= 1" },
            { "ACE_morphine", "", 850, -1, "call life_coplevel >= 1" },
            { "ACE_Flashlight_MX991", "", 40, -1, "call life_coplevel >= 1" },
            { "ACE_Flashlight_XL50", "", 40, -1, "call life_coplevel >= 1" },
            { "ACE_CableTie", "", 5, -1, "call life_coplevel >= 1" },
            { "ACE_EarPlugs", "", 1, -1, "call life_coplevel >= 1" }
        };
        mags[] = {
			//FNP45
            { "RH_15Rnd_45cal_fnp", "", 30, -1, "call life_coplevel >= 1" },
			//Taurus Revolver 
            { "RH_6Rnd_45ACP_Mag", "", 32, -1, "call life_coplevel >= 1" },
			//Taser
            { "26_cartridge", "Tazer Mag", 5, -1, "call life_coplevel >= 1" },
			//G19
            { "RH_19Rnd_9x19_g18", "", 45, -1, "call life_coplevel >= 1" },
			//USP
            { "RH_16Rnd_40cal_usp", "", 40, -1, "call life_coplevel >= 1" },
			//Kimber
            { "RH_7Rnd_45cal_m1911", "", 35, -1, "call life_coplevel >= 1" },
			//M4A1 RIS, M16A3, M4			
            { "30Rnd_556x45_Stanag", "", 80, -1, "call life_coplevel >= 1" },
			//Benelli
            { "R3F_7Rnd_M4S90", "", 75, -1, "call life_coplevel >= 1" },
			//CZ750
			{ "CUP_10Rnd_762x51_CZ750", "CUP_10Rnd_762x51_CZ750_Tracer", 35, -1, "" },
			//L115A5
			{ "CUP_5Rnd_86x70_L115A1", "", 35, -1, "call life_coplevel >= 1" },
			//M14
			{ "20Rnd_762x51_Mag", "", 35, -1, "call life_coplevel >= 1" }
        };
        accs[] = {
			//Aufsätze
            { "RH_docter", "", 100, -1, "call life_coplevel >= 1" },
            { "RH_M6X", "Taschenlampe (klein)", 100, -1, "call life_coplevel >= 1" },
            { "optic_ACO_grn_smg", "", 200, -1, "call life_coplevel >= 1" },
            { "optic_ACO_grn", "", 200, -1, "call life_coplevel >= 1" },
            { "RH_eotech553", "", 350, -1, "call life_coplevel >= 1" },
            { "acc_flashlight", "", 100, -1, "call life_coplevel >= 1" },
            { "optic_Yorris", "", 35, -1, "call life_coplevel >= 1" },
            { "optic_MRCO", "", 400, -1, "call life_coplevel >= 1" },
            { "R3F_AIMPOINT", "", 350, -1, "call life_coplevel >= 1" },
            { "R3F_J4", "", 400, -1, "call life_coplevel >= 1" },
            { "optic_Hamr", "", 400, -1, "call life_coplevel >= 1" },
            { "optic_DMS", "", 400, -1, "call life_coplevel >= 1" },
            { "optic_NVS", "", 500, -1, "call life_coplevel >= 1" },
            { "RH_m3lr", "", 350, -1, "call life_coplevel >= 1" }
        };
    };
	
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ACE_fieldDressing", "", 2, -1, "" },
            { "ACE_elasticBandage", "", 2, -1, "" },
            { "ACE_packingBandage", "", 2, -1, "" },
            { "ACE_quikclot", "", 2, -1, "" },
            { "ACE_surgicalKit", "", 10, -1, "" },
            { "ACE_tourniquet", "", 5, -1, "" },
			{ "ACE_salineIV_250", "", 5, -1, "" },
			{ "ACE_salineIV_500", "", 5, -1, "" },
			{ "ACE_salineIV", "", 15, -1, "" },
			{ "ACE_plasmaIV_250", "", 5, -1, "" },
			{ "ACE_plasmaIV_500", "", 5, -1, "" },
            { "ACE_plasmaIV", "", 50, -1, "" },
			{ "ACE_bloodIV_250", "", 5, -1, "" },
			{ "ACE_bloodIV_500", "", 5, -1, "" },
            { "ACE_bloodIV", "", 15, -1, "" },
            { "ACE_epinephrine", "", 50, -1, "" },
            { "ACE_morphine", "", 50, -1, "" },
            { "ACE_atropine", "", 50, -1, "" },
			{ "ACE_adenosine", "", 5, -1, "" },
            { "ACE_personalAidKit", "", 20, -1, "" },
            { "ACE_bodyBag", "", 10, -1, "" },
			{ "ACE_cabletie", "", 5, -1, "" },
			{ "ACE_Flashlight_MX991", "", 5, -1, "" },
			{ "ACE_Flashlight_XL50", "", 5, -1, "" },
			{ "ACE_wirecutter", "", 5, -1, "" },
			{ "ACE_Chemlight_HiWhite", "", 5, -1, "" },
            { "TRYK_headset2", "Headset Groß (Nightvision)", 100, -1, "" },
            { "TRYK_Headset_NV", "Headset Klein (Nightvision)", 100, -1, "" },
            { "tf_anprc148jem_13", "Kurzstreckenfunk", 5, -1, "" },
            { "tf_anarc164", "Langstreckenfunk", 50, -1, "" },			
            { "ToolKit", "", 200, -1, "" },
            { "ItemGPS", "", 10, -1, "" },
            { "Binocular", "", 10, -1, "" },
            { "ItemMap", "", 1, -1, "" },
            { "ItemCompass", "", 1, -1, "" },
			{ "tf_anprc148jem_1", "", 1, -1, "" },
			
            { "Chemlight_yellow", "", 1, -1, "" },
			{ "ACE_Chemlight_HiWhite", "", 1, -1, "" },
			{ "ACE_Chemlight_HiYellow", "", 1, -1, "" },
			{ "ACE_Chemlight_HiOrange", "", 1, -1, "" },
			{ "ACE_Chemlight_HiRed", "", 1, -1, "" },
			{ "Chemlight_redSilent", "", 1, -1, "" },
			{ "Chemlight_yellowSilent", "", 1, -1, "" },
			{ "Chemlight_greenSilent", "", 1, -1, "" },
			{ "Chemlight_blueSilent", "", 1, -1, "" },
			
			{ "cl_FlashLight", "", 1, -1, "" },
            { "CL_extinguisher", "", 1, -1, "" },
            { "CL_ExtinguisherMagazine", "", 1, -1, "" },
            { "CL_hammer", "", 1, -1, "" },
			
            { "pmc_earpiece", "Nachtsichtgerät", 100, -1, "" },
            { "ACE_EarPlugs", "", 1, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };
	
    class lac_basic {
        name = "store";
        side = "lac";
        conditions = "";
        items[] = {
			{ "ACE_fieldDressing", "", 2, -1, "" },
            { "ACE_elasticBandage", "", 2, -1, "" },
            { "ACE_packingBandage", "", 2, -1, "" },
			{ "ACE_tourniquet", "", 5, -1, "" },
			{ "ACE_epinephrine", "", 50, -1, "" },
            { "ACE_morphine", "", 50, -1, "" },
            { "TRYK_headset2", "Headset Groß (Nightvision)", 100, -1, "" },
            { "TRYK_Headset_NV", "Headset Klein (Nightvision)", 100, -1, "" },
            { "tf_anprc148jem_13", "Kurzstreckenfunk", 5, -1, "" },
            { "tf_anarc164", "Langstreckenfunk", 50, -1, "" },			
            { "ToolKit", "", 200, -1, "" },
            { "ItemGPS", "", 10, -1, "" },
            { "Binocular", "", 10, -1, "" },
            { "ItemMap", "", 1, -1, "" },
            { "ItemCompass", "", 1, -1, "" },
            { "Chemlight_yellow", "", 1, -1, "" },
            { "pmc_earpiece", "Nachtsichtgerät", 100, -1, "" },
            { "ACE_EarPlugs", "", 1, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
