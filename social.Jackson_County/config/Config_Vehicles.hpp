class CarShops {
    /*
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
  
  class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "" },
            { "C_Van_01_transport_F", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Van_01_box_F", "" },
            { "I_Truck_02_transport_F", "" },
            { "I_Truck_02_covered_F", "" },
            { "B_Truck_01_transport_F", "" },
            { "O_Truck_03_transport_F", "" },
            { "O_Truck_03_covered_F", "" },
            { "B_Truck_01_box_F", "" },
            { "O_Truck_03_device_F", "" },
            { "C_Van_01_fuel_F", "" },
            { "I_Truck_02_fuel_F", "" },
            { "B_Truck_01_fuel_F", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "Sab_aeroc", "" },
            { "Sab_aeroc_2", "" },
            { "sab_albatrosd2", "" },
            { "sab_albatrosb2_civ", "" },
            { "sab_ask", "" },
            { "sab_l19_sea_1", "" },
            { "sab_l19_sea_2", "" },
            { "sab_l19_3", "" },
            { "sab_l19_2", "" },
            { "sab_comet_3", "" },
            { "sab_comet", "" },
            { "sab_comet_2", "" },
            { "sab_do228_2", "" },
            { "sab_do228", "" },
            { "sab_do228_6", "" },
            { "sab_dhc3", "" },
            { "sab_falcon", "" },
            { "sab_trimotor", "" },
            { "sab_trimotor_2", "" },
            { "Sab_Sikorsky38", "" },
            { "Sab_Sikorsky38_2", "" },
            { "Sab_Sikorsky38_3", "" }
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" }
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "cg_jeep_blinde_noir", "" },
            { "cg_jeep_blinde_white", "" },
            { "cg_jeep_blinde_rouge", "" },
            { "shounka_monsteur", "" },
            { "shounka_monsteur_bleufonce", "" },
			{ "shounka_monsteur_grise", "" },
			{ "shounka_monsteur_jaune", "" },
			{ "shounka_monsteur_noir", "" },
			{ "shounka_monsteur_orange", "" },
			{ "shounka_monsteur_rose", "" },
			{ "shounka_monsteur_rouge", "" },
			{ "shounka_monsteur_violet", "" },
			{ "cl3_z4_2008_camo", "" },
			{ "cl3_carrera_gt_camo", "" },
			{ "cl3_e63_amg_camo", "" },
			{ "cl3_taurus_camo", "" },
			{ "cl3_reventon_camo", "" },
			{ "Jonzie_Forklift", "" },
			{ "cl3_enzo_camo", "" },
			{ "bv_gtr_spec_v_gold", "" },
			{ "cl3_civic_vti_camo", "" },
			{ "C_Heli_Light_01_civil_F", "" },
			{ "PMC_MH9", "" },
			{ "B_Heli_Light_01_F", "" },
			{ "O_Heli_Light_02_unarmed_F", "" },
			{ "I_Heli_light_03_unarmed_F", "" },
			{ "I_Heli_Transport_02_F", "" }
        };
    };
	
	class civ_red {
        side = "civ";
        conditions = "";
        vehicles[] = {
		//RED_Beetle
            { "red_beetle_66_black", "" },
            { "red_beetle_66_fontanagrey", "" },
            { "red_beetle_66_pearlwhite", "" },
            { "red_beetle_66_rubyred", "" },
            { "red_beetle_66_seablue", "" },
            { "red_beetle_66_vwblue", "" },
			{ "red_beetle_66_yukonyellow", "" },
			{ "red_beetle_66_seasand", "" },
			{ "red_beetle_66_bahamablue", "" },
			{ "red_beetle_66_javagreen", "" },
		//RED_Camaro
            { "red_camaro_12_black", "" },
			{ "red_camaro_12_aqua", "" },
			{ "red_camaro_12_darkblue", "" },
			{ "red_camaro_12_green", "" },
			{ "red_camaro_12_red", "" },
			{ "red_camaro_12_pink", "" },
			{ "red_camaro_12_yellow", "" },
			{ "red_camaro_12_orange", "" },
			{ "red_camaro_12_white", "" },
			{ "red_camaro_12_purple", "" },
			{ "red_camaro_12_darkgreen", "" },
			{ "red_camaro_12_darkred", "" },
			{ "red_camaro_12_blue", "" },
		//RED_Charger12
            { "red_charger_12_black", "" },
			{ "red_charger_12_aqua", "" },
			{ "red_charger_12_darkblue", "" },
			{ "red_charger_12_green", "" },
			{ "red_charger_12_red", "" },
			{ "red_charger_12_pink", "" },
			{ "red_charger_12_yellow", "" },
			{ "red_charger_12_orange", "" },
			{ "red_charger_12_white", "" },
			{ "red_charger_12_purple", "" },
			{ "red_charger_12_darkgreen", "" },
			{ "red_charger_12_darkred", "" },
			{ "red_charger_12_blue", "" },
		//RED_Charger15
            { "red_charger_15_black", "" },
			{ "red_charger_15_aqua", "" },
			{ "red_charger_15_green", "" },
			{ "red_charger_15_red", "" },
			{ "red_charger_15_pink", "" },
			{ "red_charger_15_yellow", "" },
			{ "red_charger_15_orange", "" },
			{ "red_charger_15_white", "" },
			{ "red_charger_15_purple", "" },
			{ "red_charger_15_darkgreen", "" },
			{ "red_charger_15_darkred", "" },
			{ "red_charger_15_blue", "" },
		//RED_Corvette
		    { "red_corvette_14_black", "" },
			{ "red_corvette_14_aqua", "" },
			{ "red_corvette_14_darkblue", "" },
			{ "red_corvette_14_green", "" },
			{ "red_corvette_14_red", "" },
			{ "red_corvette_14_pink", "" },
			{ "red_corvette_14_yellow", "" },
			{ "red_corvette_14_orange", "" },
			{ "red_corvette_14_white", "" },
			{ "red_corvette_14_purple", "" },
			{ "red_corvette_14_darkgreen", "" },
			{ "red_corvette_14_darkred", "" },
			{ "red_corvette_14_blue", "" },
		//RED_cvpi
		    { "red_cvpi_06_black", "" },
			{ "red_cvpi_06_aqua", "" },
			{ "red_cvpi_06_darkblue", "" },
			{ "red_cvpi_06_green", "" },
			{ "red_cvpi_06_red", "" },
			{ "red_cvpi_06_pink", "" },
			{ "red_cvpi_06_yellow", "" },
			{ "red_cvpi_06_orange", "" },
			{ "red_cvpi_06_white", "" },
			{ "red_cvpi_06_purple", "" },
			{ "red_cvpi_06_darkgreen", "" },
			{ "red_cvpi_06_darkred", "" },
			{ "red_cvpi_06_blue", "" },
		//RED_f350
		    { "red_f350_08_black", "" },
			{ "red_f350_08_aqua", "" },
			{ "red_f350_08_darkblue", "" },
			{ "red_f350_08_green", "" },
			{ "red_f350_08_red", "" },
			{ "red_f350_08_pink", "" },
			{ "red_f350_08_yellow", "" },
			{ "red_f350_08_orange", "" },
			{ "red_f350_08_white", "" },
			{ "red_f350_08_purple", "" },
			{ "red_f350_08_darkgreen", "" },
			{ "red_f350_08_darkred", "" },
			{ "red_f350_08_blue", "" },
		//RED_genesis
		    { "red_genesis_16_black", "" },
			{ "red_genesis_16_aqua", "" },
			{ "red_genesis_16_darkblue", "" },
			{ "red_genesis_16_green", "" },
			{ "red_genesis_16_red", "" },
			{ "red_genesis_16_pink", "" },
			{ "red_genesis_16_yellow", "" },
			{ "red_genesis_16_orange", "" },
			{ "red_genesis_16_white", "" },
			{ "red_genesis_16_purple", "" },
			{ "red_genesis_16_darkgreen", "" },
			{ "red_genesis_16_darkred", "" },
			{ "red_genesis_16_blue", "" },
		//RED_gs350
		    { "red_gs350_13_black", "" },
			{ "red_gs350_13_aqua", "" },
			{ "red_gs350_13_darkblue", "" },
			{ "red_gs350_13_brown", "" },
			{ "red_gs350_13_red", "" },
			{ "red_gs350_13_white", "" },
			{ "red_gs350_13_purple", "" },
			{ "red_gs350_13_darkred", "" },
			{ "red_gs350_13_blue", "" },
			{ "red_gs350_13_grey", "" },
		//RED_panamera
		    { "red_panamera_10_black", "" },
			{ "red_panamera_10_aqua", "" },
			{ "red_panamera_10_darkblue", "" },
			{ "red_panamera_10_green", "" },
			{ "red_panamera_10_red", "" },
			{ "red_panamera_10_pink", "" },
			{ "red_panamera_10_yellow", "" },
			{ "red_panamera_10_orange", "" },
			{ "red_panamera_10_white", "" },
			{ "red_panamera_10_purple", "" },
			{ "red_panamera_10_darkgreen", "" },
			{ "red_panamera_10_darkred", "" },
			{ "red_panamera_10_blue", "" },
		//RED_porsche
		    { "red_porsche_12_black", "" },
			{ "red_porsche_12_aqua", "" },
			{ "red_porsche_12_darkblue", "" },
			{ "red_porsche_12_green", "" },
			{ "red_porsche_12_red", "" },
			{ "red_porsche_12_pink", "" },
			{ "red_porsche_12_yellow", "" },
			{ "red_porsche_12_orange", "" },
			{ "red_porsche_12_white", "" },
			{ "red_porsche_12_purple", "" },
			{ "red_porsche_12_darkgreen", "" },
			{ "red_porsche_12_darkred", "" },
			{ "red_porsche_12_blue", "" },
		//RED_ram
		    { "red_ram_06_black", "" },
			{ "red_ram_06_aqua", "" },
			{ "red_ram_06_darkblue", "" },
			{ "red_ram_06_green", "" },
			{ "red_ram_06_red", "" },
			{ "red_ram_06_pink", "" },
			{ "red_ram_06_yellow", "" },
			{ "red_ram_06_orange", "" },
			{ "red_ram_06_white", "" },
			{ "red_ram_06_purple", "" },
			{ "red_ram_06_darkgreen", "" },
			{ "red_ram_06_darkred", "" },
			{ "red_ram_06_blue", "" },
		//RED_s65
		    { "red_s65_12_black", "" },
			{ "red_s65_12_aqua", "" },
			{ "red_s65_12_darkblue", "" },
			{ "red_s65_12_green", "" },
			{ "red_s65_12_red", "" },
			{ "red_s65_12_pink", "" },
			{ "red_s65_12_yellow", "" },
			{ "red_s65_12_orange", "" },
			{ "red_s65_12_white", "" },
			{ "red_s65_12_purple", "" },
			{ "red_s65_12_darkgreen", "" },
			{ "red_s65_12_darkred", "" },
			{ "red_s65_12_blue", "" },
		//RED_suburban
		    { "red_suburban_15_black", "" },
			{ "red_suburban_15_aqua", "" },
			{ "red_suburban_15_darkblue", "" },
			{ "red_suburban_15_green", "" },
			{ "red_suburban_15_red", "" },
			{ "red_suburban_15_pink", "" },
			{ "red_suburban_15_yellow", "" },
			{ "red_suburban_15_orange", "" },
			{ "red_suburban_15_white", "" },
			{ "red_suburban_15_purple", "" },
			{ "red_suburban_15_darkgreen", "" },
			{ "red_suburban_15_darkred", "" },
			{ "red_suburban_15_blue", "" },
		//RED_taurus
		    { "red_taurus_10_black", "" },
			{ "red_taurus_10_aqua", "" },
			{ "red_taurus_10_darkblue", "" },
			{ "red_taurus_10_green", "" },
			{ "red_taurus_10_red", "" },
			{ "red_taurus_10_pink", "" },
			{ "red_taurus_10_yellow", "" },
			{ "red_taurus_10_orange", "" },
			{ "red_taurus_10_white", "" },
			{ "red_taurus_10_purple", "" },
			{ "red_taurus_10_darkgreen", "" },
			{ "red_taurus_10_darkred", "" },
			{ "red_taurus_10_blue", "" },
		//RED_vanquish
		    { "red_vanquish_13_black", "" },
			{ "red_vanquish_13_aqua", "" },
			{ "red_vanquish_13_darkblue", "" },
			{ "red_vanquish_13_green", "" },
			{ "red_vanquish_13_red", "" },
			{ "red_vanquish_13_pink", "" },
			{ "red_vanquish_13_yellow", "" },
			{ "red_vanquish_13_orange", "" },
			{ "red_vanquish_13_white", "" },
			{ "red_vanquish_13_purple", "" },
			{ "red_vanquish_13_darkgreen", "" },
			{ "red_vanquish_13_darkred", "" },
			{ "red_vanquish_13_blue", "" },
		//RED_xkrs
		    { "red_xkrs_12_black", "" },
			{ "red_xkrs_12_aqua", "" },
			{ "red_xkrs_12_darkblue", "" },
			{ "red_xkrs_12_green", "" },
			{ "red_xkrs_12_red", "" },
			{ "red_xkrs_12_pink", "" },
			{ "red_xkrs_12_yellow", "" },
			{ "red_xkrs_12_orange", "" },
			{ "red_xkrs_12_white", "" },
			{ "red_xkrs_12_purple", "" },
			{ "red_xkrs_12_darkgreen", "" },
			{ "red_xkrs_12_darkred", "" },
			{ "red_xkrs_12_blue", "" },
		//RED_venomgt
		    { "red_venomgt_11_black", "" },
			{ "red_venomgt_11_aqua", "" },
			{ "red_venomgt_11_darkblue", "" },
			{ "red_venomgt_11_green", "" },
			{ "red_venomgt_11_red", "" },
			{ "red_venomgt_11_pink", "" },
			{ "red_venomgt_11_yellow", "" },
			{ "red_venomgt_11_orange", "" },
			{ "red_venomgt_11_white", "" },
			{ "red_venomgt_11_purple", "" },
			{ "red_venomgt_11_darkgreen", "" },
			{ "red_venomgt_11_darkred", "" },
			{ "red_venomgt_11_blue", "" },
		//RED_explorer
		    { "red_explorer_16_black", "" },
			{ "red_explorer_16_aqua", "" },
			{ "red_explorer_16_darkblue", "" },
			{ "red_explorer_16_green", "" },
			{ "red_explorer_16_red", "" },
			{ "red_explorer_16_pink", "" },
			{ "red_explorer_16_yellow", "" },
			{ "red_explorer_16_orange", "" },
			{ "red_explorer_16_white", "" },
			{ "red_explorer_16_purple", "" },
			{ "red_explorer_16_darkgreen", "" },
			{ "red_explorer_16_darkred", "" },
			{ "red_explorer_16_blue", "" }
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "bv_e60_m5_cop_emt", "" },
            { "clpd_mondeo_FireDepartment", "" },
			{ "Jonzie_Ambulance", "" },
			{ "bv_the_crowner_cop_emt", "" },
			{ "cg_stretcher", "" },
			{ "RR_Firetruck", "" },
			{ "EC635_SAR", "" },
			{ "FPT_MAN_base_F", "" },
			{ "mercedes_atego_pompier_ingame", "" },
			{ "shounka_a3_pompier_sprinter", "" },
			{ "cl3_escalede_cgs", "" },
			{ "cl3_transitk9", "" },
			{ "cl3_q7_clpd_cn", "" },
			{ "C_Truck_02_Box_F", "" },
			{ "FPT_MAN", "" },
			{ "fpt_renault", "" },
			{ "fptl_renault", "" },
			{ "red_suburban_15_e_EMS", "" }
			
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" }
        };
    };

    class lac_shop {
        side = "lac";
        conditions = "";
        vehicles[] = {
            { "shounka_a3_pompier_sprinter", "" },
            { "shounka_nemo_pompier", "" },
            { "Jonzie_Forklift", "" },
            { "cl3_dodge_chargerum_o_adac", "" },
            { "red_f350_08_p_sac", "" },
            { "red_explorer_16_e_sac", "" },
            { "cl3_q7_clpd_etu", "" },
            { "cl3_f150raptor_orange", "" },
            { "cl3_suv_emt_MR", "" },
            { "Quiet_sprinter_depannage", "" },
            { "shounka_a3_mantgs", "" },
            { "red_towtruck_08_orange", "" },
			{ "red_towtruck_08_sac", "" },
            { "cl3_fire_rescue_yellow", "" },
            { "EC635_ADAC", "" }			
        };
    };	

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
			{ "bv_e60_m5_cop_patrol", "" },
			{ "bv_the_crowner_cop_patrol", "" },
			{ "bv_shelly_cop_patrol", "" },
			{ "bv_458_cop_patrol", "" },
			{ "cl3_dodge_charger_patrol", "" },
			{ "cl3_dodge_charger_patrol2", "" },
			{ "cl3_reventon_clpd", "" },
			{ "cl3_escalade_patrolwb", "" },
			{ "bv_the_crowner_cop_sher", "" },	
			{ "bv_the_crowner_uc", "" },
			{ "shounka_a3_gendsprinter", "" },
			{ "red_charger_12_p_statetrooper", "" },
			{ "red_charger_12_p_u_statetrooper", "" },
			{ "red_charger_15_p_statetrooper", "" },
			{ "red_charger_15_p_u_statetrooper", "" },
			{ "red_explorer_16_p_statetrooper", "" },
			{ "red_swat_08_p_swat", "" },
			{ "red_charger_15_p_u_sheriff", "" },
			{ "red_charger_15_p_sheriff", "" },
			{ "red_charger_15_p_sheriff", "" },
			{ "red_charger_15_p_u_sheriff", "" },
			{ "red_cvpi_06_p_sheriff", "" },
			{ "red_kawasaki_10_p_sheriff", "" },
			{ "red_suburban_15_p_sheriff", "" },
			{ "red_suburban_15_p_u_sheriff", "" },
			{ "red_taurus_10_p_sheriff", "" },
			{ "red_taurus_10_p_u_sheriff", "" },
			{ "red_charger_15_p_patrol", "" },
			{ "red_charger_15_p_u_patrol", "" },
			{ "red_taurus_10_p_patrol", "" },
			{ "red_taurus_10_p_u_patrol", "" },
			{ "red_charger_15_p_sert", "" },
			{ "red_charger_15_p_u_sert", "" },
			{ "red_taurus_10_p_sert", "" },
			{ "red_taurus_10_p_u_sert", "" },
			{ "red_taurus_10_p_u_trooper", "" },
			{ "red_taurus_10_p_trooper", "" },
			{ "red_cvpi_06_p_trooper", "" },
			{ "red_f350_08_p_parkranger", "" },
			{ "red_kawasaki_10_p_trooper", "" },
			{ "red_camaro_12_p_u_black", "" },
			{ "red_camaro_12_p_u_aqua", "" },
			{ "red_camaro_12_p_u_darkblue", "" },
			{ "red_camaro_12_p_u_green", "" },
			{ "red_camaro_12_p_u_red", "" },
			{ "red_camaro_12_p_u_yellow", "" },
			{ "red_camaro_12_p_u_orange", "" },
			{ "red_camaro_12_p_u_white", "" },
			{ "red_camaro_12_p_u_purple", "" },
			{ "red_camaro_12_p_u_darkgreen", "" },
			{ "red_camaro_12_p_u_darkred", "" },
			{ "red_camaro_12_p_u_custom1", "" },
			{ "red_camaro_12_p_u_custom2", "" },
			{ "red_camaro_12_p_u_custom3", "" },
			{ "red_camaro_12_p_u_custom4", "" },
			{ "red_camaro_12_p_u_custom5", "" },
			{ "red_charger_12_p_u_black", "" },
			{ "red_charger_12_p_u_aqua", "" },
			{ "red_charger_12_p_u_darkblue", "" },
			{ "red_charger_12_p_u_green", "" },
			{ "red_charger_12_p_u_red", "" },
			{ "red_charger_12_p_u_yellow", "" },
			{ "red_charger_12_p_u_orange", "" },
			{ "red_charger_12_p_u_white", "" },
			{ "red_charger_12_p_u_purple", "" },
			{ "red_charger_12_p_u_darkgreen", "" },
			{ "red_charger_12_p_u_darkred", "" },
			{ "red_charger_12_p_u_custom1", "" },
			{ "red_charger_12_p_u_custom2", "" },
			{ "red_charger_12_p_u_custom3", "" },
			{ "red_charger_12_p_u_custom4", "" },
			{ "red_charger_12_p_u_custom5", "" },
			{ "red_charger_15_p_u_black", "" },
			{ "red_charger_15_p_u_aqua", "" },
			{ "red_charger_15_p_u_darkblue", "" },
			{ "red_charger_15_p_u_green", "" },
			{ "red_charger_15_p_u_red", "" },
			{ "red_charger_15_p_u_yellow", "" },
			{ "red_charger_15_p_u_orange", "" },
			{ "red_charger_15_p_u_white", "" },
			{ "red_charger_15_p_u_purple", "" },
			{ "red_charger_15_p_u_darkgreen", "" },
			{ "red_charger_15_p_u_darkred", "" },
			{ "red_charger_15_p_u_custom1", "" },
			{ "red_charger_15_p_u_custom2", "" },
			{ "red_charger_15_p_u_custom3", "" },
			{ "red_charger_15_p_u_custom4", "" },
			{ "red_charger_15_p_u_custom5", "" },
			{ "red_panamera_10_p_u_black", "" },
			{ "red_panamera_10_p_u_aqua", "" },
			{ "red_panamera_10_p_u_darkblue", "" },
			{ "red_panamera_10_p_u_green", "" },
			{ "red_panamera_10_p_u_red", "" },
			{ "red_panamera_10_p_u_yellow", "" },
			{ "red_panamera_10_p_u_orange", "" },
			{ "red_panamera_10_p_u_white", "" },
			{ "red_panamera_10_p_u_purple", "" },
			{ "red_panamera_10_p_u_darkgreen", "" },
			{ "red_panamera_10_p_u_darkred", "" },
			{ "red_panamera_10_p_u_custom1", "" },
			{ "red_panamera_10_p_u_custom2", "" },
			{ "red_panamera_10_p_u_custom3", "" },
			{ "red_panamera_10_p_u_custom4", "" },
			{ "red_panamera_10_p_u_custom5", "" },
			{ "red_suburban_15_p_u_unmarked", "" },
			{ "red_suburban_15_p_u_unmarked_2", "" },
			{ "red_suburban_15_p_u_black", "" },
			{ "red_suburban_15_p_u_aqua", "" },
			{ "red_suburban_15_p_u_darkblue", "" },
			{ "red_suburban_15_p_u_green", "" },
			{ "red_suburban_15_p_u_red", "" },
			{ "red_suburban_15_p_u_yellow", "" },
			{ "red_suburban_15_p_u_orange", "" },
			{ "red_suburban_15_p_u_white", "" },
			{ "red_suburban_15_p_u_purple", "" },
			{ "red_suburban_15_p_u_darkgreen", "" },
			{ "red_suburban_15_p_u_darkred", "" },
			{ "red_suburban_15_p_u_custom1", "" },
			{ "red_suburban_15_p_u_custom2", "" },
			{ "red_suburban_15_p_u_custom3", "" },
			{ "red_suburban_15_p_u_custom4", "" },
			{ "red_suburban_15_p_u_custom5", "" },
			{ "red_taurus_10_p_u_black", "" },
			{ "red_taurus_10_p_u_aqua", "" },
			{ "red_taurus_10_p_u_darkblue", "" },
			{ "red_taurus_10_p_u_green", "" },
			{ "red_taurus_10_p_u_red", "" },
			{ "red_taurus_10_p_u_yellow", "" },
			{ "red_taurus_10_p_u_orange", "" },
			{ "red_taurus_10_p_u_white", "" },
			{ "red_taurus_10_p_u_purple", "" },
			{ "red_taurus_10_p_u_darkgreen", "" },
			{ "red_taurus_10_p_u_darkred", "" },
			{ "red_taurus_10_p_u_custom1", "" },
			{ "red_taurus_10_p_u_custom2", "" },
			{ "red_taurus_10_p_u_custom3", "" },
			{ "red_taurus_10_p_u_custom4", "" },
			{ "red_taurus_10_p_u_custom5", "" },
            { "red_camaro_12_black", "" },
			{ "red_camaro_12_red", "" },
			{ "red_ram_06_black", "" },
			{ "red_ram_06_blue", "" },
			{ "red_porsche_12_aqua", "" },
			{ "red_porsche_12_black", "" },
			{ "red_porsche_12_p_u_black", "" },
		//RED_SL-SKINS			
			{ "red_charger_12_p_lvpd", "" },
			{ "red_charger_12_p_sheriff", "" },
			{ "red_charger_12_p_fbi", "" },
			{ "red_charger_12_p_u_lvpd", "" },
			{ "red_charger_12_p_u_sheriff", "" },
			{ "red_charger_12_p_u_fbi", "" },
			{ "red_charger_15_p_lvpd", "" },
			{ "red_charger_15_p_u_lvpd", "" },
			{ "red_charger_15_p_fbi", "" },
			{ "red_charger_15_p_u_fbi", "" },
			{ "red_cvpi_06_p_lvpd", "" },
			{ "red_cvpi_06_p_fbi", "" },
			{ "red_f350_08_p_sheriff", "" },
			{ "red_f350_08_lvpd", "" },
			{ "red_explorer_16_p_sheriff", "" },
            { "red_explorer_16_p_lvpd", "" },
            { "red_explorer_16_p_fbi", "" },
            { "red_suburban_15_p_statetrooper", "" },
            { "red_suburban_15_p_fbi", "" },
            { "red_suburban_15_p_lvpd", "" },
            { "red_suburban_15_p_u_statetrooper", "" },
            { "red_suburban_15_p_u_fbi", "" },
            { "red_suburban_15_p_u_lvpd", "" },
			{ "red_taurus_10_p_lvpd", "" },
            { "red_taurus_10_p_fbi", "" },
            { "red_taurus_10_p_u_lvpd", "" },
            { "red_taurus_10_p_u_fbi", "" }
        };
    };	

    class cop_air {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "EC635_Unarmed", "" },
            { "MELB_H6M", "" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
            { "B_SDV_01_F", "" }
        };
    };
	
    class gebraucht {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "cl3_lada_red", "" },
			{ "cl3_volha_black", "" },
			{ "cl3_civic_vti_yellow", "" },
			{ "cl3_amc_pacer_yellow", "" },
			{ "Jonzie_Mini_Cooper", "" },
			{ "Jonzie_Mini_Cooper_R_spec", "" },
			{ "cl3_defender_110_yellow", "" },
			{ "D_Cobalt_Yellow", "" }
        };
    };

    class neuwagen {
        side = "civ";
        conditions = "";
        vehicles[] = {
		//Mclaren
			{ "S_McLarenP1_Black", "" },
			{ "S_McLarenP1_Blue", "" },
			{ "S_McLarenP1_Orange", "" },
			{ "S_McLarenP1_White", "" },
			{ "S_McLarenP1_Yellow", "" },
			{ "S_McLarenP1_Silver", "" },
			{ "shounka_mp4_noir", "" },
			{ "shounka_mp4_bleufonce", "" },
			{ "shounka_mp4_rouge", "" },
			{ "shounka_mp4_jaune", "" },
			{ "shounka_mp4_rose", "" },
			{ "shounka_mp4_grise", "" },
			{ "shounka_mp4_violet", "" },
			{ "shounka_mp4_orange", "" },
		//Subaru
			{ "Mrshounka_subaru08_noir", "" },
			{ "Mrshounka_subaru08_bleufonce", "" },
			{ "Mrshounka_subaru08_rouge", "" },
			{ "Mrshounka_subaru08_jaune", "" },
			{ "Mrshounka_subaru08_rose", "" },
			{ "Mrshounka_subaru08_grise", "" },
			{ "Mrshounka_subaru08_violet", "" },
			{ "Mrshounka_subaru08_orange", "" },
			//Nissan
			{ "S_Skyline_Red", "" },
			{ "S_Skyline_Blue", "" },
			{ "S_Skyline_Black", "" },
			{ "S_Skyline_Yellow", "" },
			{ "S_Skyline_Purple", "" },
			{ "S_Skyline_White", "" },
		//Jeep
			{ "cl3_range_rover_white", "" },
			{ "cl3_range_rover_purple", "" },
			{ "cl3_range_rover_navy_blue", "" },
			{ "cl3_range_rover_lime", "" },
			{ "cl3_range_rover_light_yellow", "" },
			{ "cl3_range_rover_light_blue", "" },
			{ "cl3_range_rover_grey", "" },
			{ "cl3_range_rover_burgundy", "" },
			{ "cl3_range_rover_black", "" },
			{ "cl3_suv_taxi", "" },
			{ "Jonzie_Escalade", "" },
			{ "Mrshounka_cherokee_noir_bleu", "" },
			{ "Mrshounka_cherokee_noir_bleu_mat", "" },
			{ "Mrshounka_cherokee_noir_blanc", "" },
			{ "Mrshounka_cherokee_noir_blanc_mat", "" },
			{ "Mrshounka_cherokee_noir_violet", "" },
			{ "Mrshounka_cherokee_noir_violet_mat", "" },
			{ "Mrshounka_cherokee_noir_rouge", "" },
			{ "Mrshounka_cherokee_noir_rouge_mat", "" },
			//Honda
			{ "cl3_civic_vti_white", "" },
			{ "cl3_civic_vti_purple", "" },
			{ "cl3_civic_vti_navy_blue", "" },
			{ "cl3_civic_vti_lime", "" },
			{ "cl3_civic_vti_light_yellow", "" },
			{ "cl3_civic_vti_light_blue", "" },
			{ "cl3_civic_vti_grey", "" },
			{ "cl3_civic_vti_burgundy", "" },
			{ "cl3_civic_vti_black", "" },
		//Renault
			{ "Mrshounka_megane_rs_2015_noir", "" },
			{ "Mrshounka_megane_rs_2015_bleufonce", "" },
			{ "Mrshounka_megane_rs_2015_rouge", "" },
			{ "Mrshounka_megane_rs_2015_jaune", "" },
			{ "Mrshounka_megane_rs_2015_rose", "" },
			{ "Mrshounka_megane_rs_2015_grise", "" },
			{ "Mrshounka_megane_rs_2015_violet", "" },
			{ "Mrshounka_megane_rs_2015_orange", "" },
			{ "Mrshounka_r5_noir", "" },
			{ "Mrshounka_r5_bleufonce", "" },
			{ "Mrshounka_r5_rouge", "" },
			{ "Mrshounka_r5_jaune", "" },
			{ "Mrshounka_r5_rose", "" },
			{ "Mrshounka_r5_grise", "" },
			{ "Mrshounka_r5_violet", "" },
			{ "Mrshounka_r5_orange", "" },
			{ "Mrshounka_twingo_p_noir", "" },
			{ "Mrshounka_twingo_p_bf", "" },
			{ "Mrshounka_twingo_p_r", "" },
			{ "Mrshounka_twingo_p_j", "" },
			{ "Mrshounka_twingo_p_rose", "" },
			{ "Mrshounka_twingo_p_g", "" },
			{ "Mrshounka_twingo_p_v", "" },
			{ "Mrshounka_twingo_p_o", "" },
			{ "shounka_a3_cliors_civ_noir", "" },
			{ "shounka_a3_cliors_civ_bleufonce", "" },
			{ "shounka_a3_cliors_civ_rouge", "" },
			{ "shounka_a3_cliors_civ_jaune", "" },
			{ "shounka_a3_cliors_civ_rose", "" },
			{ "shounka_a3_cliors_civ_grise", "" },
			{ "shounka_a3_cliors_civ_violet", "" },
			{ "shounka_a3_cliors_civ_orange", "" },
		//Peugeot 207
			{ "Mrshounka_207_noir", "" },
			{ "Mrshounka_207_bleufonce", "" },
			{ "Mrshounka_207_rouge", "" },
			{ "Mrshounka_207_jaune", "" },
			{ "Mrshounka_207_rose", "" },
			{ "Mrshounka_207_grise", "" },
			{ "Mrshounka_207_violet", "" },
			{ "Mrshounka_207_orange", "" },
		//Peugeot 308 RCZ
			{ "Mrshounka_a3_308_rcz_noir", "" },
			{ "Mrshounka_a3_308_rcz_bleufonce", "" },
			{ "Mrshounka_a3_308_rcz_rouge", "" },
			{ "Mrshounka_a3_308_rcz_jaune", "" },
			{ "Mrshounka_a3_308_rcz_rose", "" },
			{ "Mrshounka_a3_308_rcz_grise", "" },
			{ "Mrshounka_a3_308_rcz_violet", "" },
			{ "Mrshounka_a3_308_rcz_orange", "" },
		//Peugeot 308 GTI
			{ "Mrshounka_a3_308_civ_noir", "" },
			{ "Mrshounka_a3_308_civ_bleufonce", "" },
			{ "Mrshounka_a3_308_civ_rouge", "" },
			{ "Mrshounka_a3_308_civ_jaune", "" },
			{ "Mrshounka_a3_308_civ_rose", "" },
			{ "Mrshounka_a3_308_civ_grise", "" },
			{ "Mrshounka_a3_308_civ_violet", "" },
			{ "Mrshounka_a3_308_civ_orange", "" },
		//Peugeot 508
			{ "shounka_a3_peugeot508_civ_noir", "" },
			{ "shounka_a3_peugeot508_civ_bleufonce", "" },
			{ "shounka_a3_peugeot508_civ_rouge", "" },
			{ "shounka_a3_peugeot508_civ_jaune", "" },
			{ "shounka_a3_peugeot508_civ_rose", "" },
			{ "shounka_a3_peugeot508_civ_grise", "" },
			{ "shounka_a3_peugeot508_civ_violet", "" },
			{ "shounka_a3_peugeot508_civ_orange", "" },
		//Citroen DS3
			{ "Mrshounka_a3_ds3_civ_noir", "" },
			{ "Mrshounka_a3_ds3_civ_bleufonce", "" },
			{ "Mrshounka_a3_ds3_civ_civ_rouge", "" },
			{ "Mrshounka_a3_ds3_civ_civ_jaune", "" },
			{ "Mrshounka_a3_ds3_civ_civ_rose", "" },
			{ "Mrshounka_a3_ds3_civ_civ_grise", "" },
			{ "Mrshounka_a3_ds3_civ_civ_violet", "" },
			{ "Mrshounka_a3_ds3_civ_civ_orange", "" },
		//Citroen DS4
			{ "shounka_a3_ds4_noir", "" },
			{ "shounka_a3_ds4_bleufonce", "" },
			{ "shounka_a3_ds4_rouge", "" },
			{ "shounka_a3_ds4_jaune", "" },
			{ "shounka_a3_ds4_rose", "" },
			{ "shounka_a3_ds4_grise", "" },
			{ "shounka_a3_ds4_violet", "" },
			{ "shounka_a3_ds4_orange", "" },
		//Citroen C4
			{ "Mrshounka_c4_p_noir", "" },
			{ "Mrshounka_c4_p_bleufonce", "" },
			{ "Mrshounka_c4_p_rouge", "" },
			{ "Mrshounka_c4_p_jaune", "" },
			{ "Mrshounka_c4_p_rose", "" },
			{ "Mrshounka_c4_p_grise", "" },
			{ "Mrshounka_c4_p_violet", "" },
			{ "Mrshounka_c4_p_orange", "" },
		//Alpha Romeo
			{ "Mrshounka_Alfa_Romeo_noir", "" },
			{ "Mrshounka_Alfa_Romeo_bleufonce", "" },
			{ "Mrshounka_Alfa_Romeo_rouge", "" },
			{ "Mrshounka_Alfa_Romeo_jaune", "" },
			{ "Mrshounka_Alfa_Romeo_rose", "" },
			{ "Mrshounka_Alfa_Romeo_grise", "" },
			{ "Mrshounka_Alfa_Romeo_violet", "" },
			{ "Mrshounka_Alfa_Romeo_orange", "" },
		//Mitzubishi
			{ "Mrshounka_evox_noir", "" },
			{ "Mrshounka_evox_bleufonce", "" },
			{ "Mrshounka_evox_rouge", "" },
			{ "Mrshounka_evox_jaune", "" },
			{ "Mrshounka_evox_rose", "" },
			{ "Mrshounka_evox_grise", "" },
			{ "Mrshounka_evox_violet", "" },
			{ "Mrshounka_evox_orange", "" },
		//Transam
			{ "shounka_transam_noir", "" },
			{ "shounka_transam_bleufonce", "" },
			{ "shounka_transam_rouge", "" },
			{ "shounka_transam_jaune", "" },
			{ "shounka_transam_rose", "" },
			{ "shounka_transam_grise", "" },
			{ "shounka_transam_violet", "" },
			{ "shounka_transam_orange", "" },
		//Hummer
			{ "Mrshounka_hummer_civ_noir", "" },
			{ "Mrshounka_hummer_civ_bleufonce", "" },
			{ "Mrshounka_hummer_civ_rouge", "" },
			{ "Mrshounka_hummer_civ_jaune", "" },
			{ "Mrshounka_hummer_civ_rose", "" },
			{ "Mrshounka_hummer_civ_grise", "" },
			{ "Mrshounka_hummer_civ_violet", "" },
			{ "Mrshounka_hummer_civ_orange", "" },
			{ "shounka_h2_noir", "" },
			{ "shounka_h2_bleufonce", "" },
			{ "shounka_h2_rouge", "" },
			{ "shounka_h2_jaune", "" },
			{ "shounka_h2_rose", "" },
			{ "shounka_h2_grise", "" },
			{ "shounka_h2_violet", "" },
			{ "shounka_h2_orange", "" },
			{ "cl3_enduro_yellow", "" },
			{ "cl3_enduro_black", "" },
			{ "cl3_enduro_blue", "" },
			{ "cl3_enduro_aqua", "" },
			{ "cl3_enduro_babypink", "" },
			{ "cl3_enduro_red", "" },
			{ "cl3_enduro_dark_green", "" },
			{ "cl3_chopper_blue", "" },
			{ "cl3_chopper_green", "" },
			{ "cl3_chopper_red", "" }
        };
    };
	
    class luxus {
        side = "civ";
        conditions = "";
        vehicles[] = {
		//Lambo
			{ "mrshounka_huracan_c_noir", "" },
			{ "mrshounka_huracan_c_bleufonce", "" },
			{ "mrshounka_huracan_c_rouge", "" },
			{ "mrshounka_huracan_c_jaune", "" },
			{ "mrshounka_huracan_c_rose", "" },
			{ "mrshounka_huracan_c_grise", "" },
			{ "mrshounka_huracan_c_violet", "" },
			{ "mrshounka_huracan_c_orange", "" },
			{ "cl3_murcielago_white", "" },
			{ "cl3_murcielago_purple", "" },
			{ "cl3_murcielago_navy_blue", "" },
			{ "cl3_murcielago_lime", "" },
			{ "cl3_murcielago_light_yellow", "" },
			{ "cl3_murcielago_light_blue", "" },
			{ "cl3_murcielago_grey", "" },
			{ "cl3_murcielago_burgundy", "" },
			{ "cl3_murcielago_black", "" },
			{ "Mrshounka_veneno_c_noir", "" },
			{ "Mrshounka_veneno_c_bleu", "" },
			{ "Mrshounka_veneno_c_jaune", "" },
			{ "Mrshounka_veneno_c_grau", "" },
			{ "Mrshounka_veneno_c_rot", "" },
			{ "Mrshounka_veneno_c_gruen", "" },
			{ "Mrshounka_veneno_c_violet", "" },
			{ "cl3_reventon_white", "" },
			{ "cl3_reventon_purple", "" },
			{ "cl3_reventon_navy_blue", "" },
			{ "cl3_reventon_lime", "" },
			{ "cl3_reventon_light_yellow", "" },
			{ "cl3_reventon_light_blue", "" },
			{ "cl3_reventon_grey", "" },
			{ "cl3_reventon_burgundy", "" },
			{ "cl3_reventon_black", "" },
			{ "cl3_lamborghini_gt1_white", "" },
			{ "cl3_lamborghini_gt1_purple", "" },
			{ "cl3_lamborghini_gt1_navy_blue", "" },
			{ "cl3_lamborghini_gt1_lime", "" },
			{ "cl3_lamborghini_gt1_light_yellow", "" },
			{ "cl3_lamborghini_gt1_light_blue", "" },
			{ "cl3_lamborghini_gt1_grey", "" },
			{ "cl3_lamborghini_gt1_burgundy", "" },
			{ "cl3_lamborghini_gt1_black", "" },
		//Porsche
			{ "S_PorscheRS_Black", "" },
			{ "S_PorscheRS_White", "" },
			{ "cl3_carrera_gt_white", "" },
			{ "cl3_carrera_gt_purple", "" },
			{ "cl3_carrera_gt_navy_blue", "" },
			{ "cl3_carrera_gt_lime", "" },
			{ "cl3_carrera_gt_light_blue", "" },
			{ "cl3_carrera_gt_grey", "" },
			{ "cl3_carrera_gt_burgundy", "" },
			{ "cl3_carrera_gt_black", "" },
			{ "Mrshounka_cayenne_p_noir", "" },
			{ "Mrshounka_cayenne_p_bleufonce", "" },
			{ "Mrshounka_cayenne_p_rouge", "" },
			{ "Mrshounka_cayenne_p_jaune", "" },
			{ "Mrshounka_cayenne_p_rose", "" },
			{ "Mrshounka_cayenne_p_grise", "" },
			{ "Mrshounka_cayenne_p_violet", "" },
			{ "Mrshounka_cayenne_p_orange", "" },
			{ "shounka_porsche911_noir", "" },
			{ "shounka_porsche911_bleufonce", "" },
			{ "shounka_porsche911_rouge", "" },
			{ "shounka_porsche911_jaune", "" },
			{ "shounka_porsche911_rose", "" },
			{ "shounka_porsche911_grise", "" },
			{ "shounka_porsche911_violet", "" },
			{ "shounka_porsche911_orange", "" },
			{ "mrshounka_92_civ_noir", "" },
			{ "mrshounka_92_civ_bleufonce", "" },
			{ "mrshounka_92_civ_rouge", "" },
			{ "mrshounka_92_civ_jaune", "" },
			{ "mrshounka_92_civ_rose", "" },
			{ "mrshounka_92_civ_grise", "" },
			{ "mrshounka_92_civ_violet", "" },
			{ "mrshounka_92_civ_orange", "" },
		//Ferari
			{ "cl3_458_white", "" },
			{ "cl3_458_purple", "" },
			{ "cl3_458_navy_blue", "" },
			{ "cl3_458_lime", "" },
			{ "cl3_458_light_yellow", "" },
			{ "cl3_458_light_blue", "" },
			{ "cl3_458_grey", "" },
			{ "cl3_458_burgundy", "" },
			{ "cl3_458_black", "" },
			{ "shounka_f430_spider_noir", "" },
			{ "shounka_f430_spider_bleufonce", "" },
			{ "shounka_f430_spider_rouge", "" },
			{ "shounka_f430_spider_jaune", "" },
			{ "shounka_f430_spider_rose", "" },
			{ "shounka_f430_spider_grise", "" },
			{ "shounka_f430_spider_violet", "" },
			{ "shounka_f430_spider_orange", "" },
		//Dodge
			{ "cl3_dodge_charger_f_white", "" },
			{ "cl3_dodge_charger_f_purple", "" },
			{ "cl3_dodge_charger_f_blue", "" },
			{ "cl3_dodge_charger_f_lime", "" },
			{ "cl3_dodge_charger_f_grey", "" },
			{ "cl3_dodge_charger_f_black", "" },
			{ "cl3_dodge_charger_f_darkgreen", "" },
			{ "cl3_dodge_charger_f_darkred", "" },
			{ "Jonzie_Viper", "" },
		//Aston Martin
			{ "S_Vantage_Red", "" },
			{ "S_Vantage_Blue", "" },
			{ "S_Vantage_Black", "" },
			{ "S_Vantage_Yellow", "" },
			{ "S_Vantage_LightBlue", "" },
			{ "S_Vantage_Purple", "" },
			{ "S_Vantage_White", "" },
			{ "cl3_dbs_volante_white", "" },
			{ "cl3_dbs_volante_purple", "" },
			{ "cl3_dbs_volante_navy_blue", "" },
			{ "cl3_dbs_volante_lime", "" },
			{ "cl3_dbs_volante_light_yellow", "" },
			{ "cl3_dbs_volante_light_blue", "" },
			{ "cl3_dbs_volante_grey", "" },
			{ "cl3_dbs_volante_burgundy", "" },
			{ "cl3_dbs_volante_black", "" },
		//Agera	
			{ "Mrshounka_agera_p_noir", "" },
			{ "Mrshounka_agera_p_bleu", "" },
			{ "Mrshounka_agera_p_jaune", "" },
		//Lykan
			{ "Mrshounka_lykan_c_noir", "" },
			{ "Mrshounka_lykan_c_bleufonce", "" },
			{ "Mrshounka_lykan_c_rouge", "" },
			{ "Mrshounka_lykan_c_jaune", "" },
			{ "Mrshounka_lykan_c_rose", "" },
			{ "Mrshounka_lykan_c_grise", "" },
			{ "Mrshounka_lykan_c_violet", "" },
			{ "Mrshounka_lykan_c_orange", "" }
        };
    };
	
    class vw {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "RDS_Golf4_Civ_01", "" },
			{ "cl3_golf_mk2_white", "" },
			{ "cl3_golf_mk2_purple", "" },
			{ "cl3_golf_mk2_navy_blue", "" },
			{ "cl3_golf_mk2_lime", "" },
			{ "cl3_golf_mk2_light_yellow", "" },
			{ "cl3_golf_mk2_light_blue", "" },
			{ "cl3_golf_mk2_grey", "" },
			{ "cl3_golf_mk2_burgundy", "" },
			{ "cl3_golf_mk2_black", "" },
			{ "cl3_polo_gti_white", "" },
			{ "cl3_polo_gti_purple", "" },
			{ "cl3_polo_gti_navy_blue", "" },
			{ "cl3_polo_gti_lime", "" },
			{ "cl3_polo_gti_light_yellow", "" },
			{ "cl3_polo_gti_light_blue", "" },
			{ "cl3_polo_gti_grey", "" },
			{ "cl3_polo_gti_burgundy", "" },
			{ "cl3_polo_gti_black", "" },
			{ "Mrshounka_Volkswagen_Touareg_noir", "" },
			{ "Mrshounka_Volkswagen_Touareg_bleufonce", "" },
			{ "Mrshounka_Volkswagen_Touareg_rouge", "" },
			{ "Mrshounka_Volkswagen_Touareg_jaune", "" },
			{ "Mrshounka_Volkswagen_Touareg_rose", "" },
			{ "Mrshounka_Volkswagen_Touareg_grise", "" },
			{ "Mrshounka_Volkswagen_Touareg_violet", "" },
			{ "Mrshounka_Volkswagen_Touareg_orange", "" }
        };
    };
	
    class sport {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "cl3_veyron_blk_wht", "" },
			{ "cl3_veyron_lblue_dblue", "" },
			{ "cl3_veyron_lblue_lblue", "" },
			{ "cl3_veyron_brn_blk", "" },
			{ "Mrshounka_pagani_c_noir", "" },
			{ "Mrshounka_pagani_c_bleufonce", "" },
			{ "Mrshounka_pagani_c_rouge", "" },
			{ "Mrshounka_pagani_c_jaune", "" },
			{ "Mrshounka_pagani_c_rose", "" },
			{ "Mrshounka_pagani_c_grise", "" },
			{ "Mrshounka_pagani_c_violet", "" },
			{ "Mrshounka_pagani_c_orange", "" },
			{ "shounka_limo_civ_noir", "" },
			{ "shounka_limo_civ_bleufonce", "" },
			{ "shounka_limo_civ_rouge", "" },
			{ "shounka_limo_civ_jaune", "" },
			{ "shounka_limo_civ_rose", "" },
			{ "shounka_limo_civ_grise", "" },
			{ "shounka_limo_civ_violet", "" },
			{ "shounka_limo_civ_orange", "" },
			//Buggys
			{ "shounka_buggy_noir", "" },
			{ "shounka_buggy_grise", "" },
			{ "shounka_buggy_rouge", "" },
			{ "shounka_buggy_jauwne", "" },
			{ "shounka_buggy_bleufonce", "" },
			{ "shounka_buggy_violet", "" },
			{ "shounka_buggy_orange", "" },
			{ "shounka_buggy_rose", "" }
        };
    };
	
    class ford {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "Jonzie_Transit", "" },
			{ "Jonzie_Raptor", "" },
			{ "Jonzie_XB", "" },			
			{ "shounka_gt_noir", "" },
			{ "shounka_gt_bleufonce", "" },
			{ "shounka_gt_rouge", "" },
			{ "shounka_gt_jaune", "" },
			{ "shounka_gt_rose", "" },
			{ "shounka_gt_grise", "" },
			{ "shounka_gt_violet", "" },
			{ "shounka_gt_orange", "" },
			{ "Mrshounka_mustang_noir", "" },
			{ "Mrshounka_mustang_mat_n", "" },
			{ "Mrshounka_mustang_bleufonce", "" },
			{ "Mrshounka_mustang_mat_b", "" },
			{ "Mrshounka_mustang_rouge", "" },
			{ "Mrshounka_mustang_jaune", "" },
			{ "Mrshounka_mustang_rose", "" },
			{ "Mrshounka_mustang_grise", "" },
			{ "Mrshounka_mustang_violet", "" },
			{ "Mrshounka_mustang_orange", "" },
			{ "Mrshounka_raptor2_noir", "" },
			{ "Mrshounka_raptor2_bleufonce", "" },
			{ "Mrshounka_raptor2_rouge", "" },
			{ "Mrshounka_raptor2_jaune", "" },
			{ "Mrshounka_raptor2_rose", "" },
			{ "Mrshounka_raptor2_grise", "" },
			{ "Mrshounka_raptor2_violet", "" },
			{ "Mrshounka_raptor2_orange", "" }
        };
    };
	
    class opel {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "cl3_insignia_white", "" },
			{ "cl3_insignia_purple", "" },
			{ "cl3_insignia_navy_blue", "" },
			{ "cl3_insignia_lime", "" },
			{ "cl3_insignia_light_yellow", "" },
			{ "cl3_insignia_light_blue", "" },
			{ "cl3_insignia_grey", "" },
			{ "cl3_insignia_burgundy", "" },
			{ "cl3_insignia_black", "" }
        };
    };
	
    class mercedes {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "cl3_e63_amg_white", "" },
			{ "cl3_e63_amg_purple", "" },
			{ "cl3_e63_amg_navy_blue", "" },
			{ "cl3_e63_amg_lime", "" },
			{ "cl3_e63_amg_light_yellow", "" },
			{ "cl3_e63_amg_light_blue", "" },
			{ "cl3_e63_amg_grey", "" },
			{ "cl3_e63_amg_burgundy", "" },
			{ "cl3_e63_amg_black", "" },
			{ "Mrshounka_c63_2015_noir", "" },
			{ "Mrshounka_c63_2015_mat_n", "" },
			{ "Mrshounka_c63_2015_bleufonce", "" },
			{ "Mrshounka_c63_2015_mat_b", "" },
			{ "Mrshounka_c63_2015_rouge", "" },
			{ "Mrshounka_c63_2015_jaune", "" },
			{ "Mrshounka_c63_2015_rose", "" },
			{ "Mrshounka_c63_2015_grise", "" },
			{ "Mrshounka_c63_2015_violet", "" },
			{ "Mrshounka_c63_2015_orange", "" },
			{ "shounka_clk_noir", "" },
			{ "shounka_clk_bleufonce", "" },
			{ "shounka_clk_rouge", "" },
			{ "shounka_clk_jaune", "" },
			{ "shounka_clk_rose", "" },
			{ "shounka_clk_grise", "" },
			{ "shounka_clk_violet", "" },
			{ "shounka_clk_orange", "" },
			{ "shounka_a3_spr_civ_noir", "" },
			{ "shounka_a3_spr_civ_bleufonce", "" },
			{ "shounka_a3_spr_civ_rouge", "" },
			{ "shounka_a3_spr_civ_jaune", "" },
			{ "shounka_a3_spr_civ_rose", "" },
			{ "shounka_a3_spr_civ_grise", "" },
			{ "shounka_a3_spr_civ_violet", "" },
			{ "shounka_a3_spr_civ_orange", "" },
		//Smart
			{ "Mrshounka_a3_smart_civ_noir", "" },
			{ "Mrshounka_a3_smart_civ_bleu", "" }
        };
    };
	
    class audi {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "shounka_a3_rs5_civ_noir", "" },
			{ "shounka_a3_rs5_civ_bleufonce", "" },
			{ "shounka_a3_rs5_civ_rouge", "" },
			{ "shounka_a3_rs5_civ_jaune", "" },
			{ "shounka_a3_rs5_civ_rose", "" },
			{ "shounka_a3_rs5_civ_grise", "" },
			{ "shounka_a3_rs5_civ_violet", "" },
			{ "shounka_a3_rs5_civ_orange", "" },
			{ "cl3_r8_spyder_white", "" },
			{ "cl3_r8_spyder_purple", "" },
			{ "cl3_r8_spyder_navy_blue", "" },
			{ "cl3_r8_spyder_lime", "" },
			{ "cl3_r8_spyder_light_yellow", "" },
			{ "cl3_r8_spyder_light_blue", "" },
			{ "cl3_r8_spyder_grey", "" },
			{ "cl3_r8_spyder_burgundy", "" },
			{ "cl3_r8_spyder_black", "" },
			{ "Mrshounka_rs4_civ_noir", "" },
			{ "Mrshounka_rs4_civ_bleufonce", "" },
			{ "Mrshounka_rs4_civ_rouge", "" },
			{ "Mrshounka_rs4_civ_jaune", "" },
			{ "Mrshounka_rs4_civ_rose", "" },
			{ "Mrshounka_rs4_civ_grise", "" },
			{ "Mrshounka_rs4_civ_violet", "" },
			{ "Mrshounka_rs4_civ_orange", "" },
			{ "shounka_rs6_noir", "" },
			{ "shounka_rs6_bleufonce", "" },
			{ "shounka_rs6_rouge", "" },
			{ "shounka_rs6_jaune", "" },
			{ "shounka_rs6_rose", "" },
			{ "shounka_rs6_grise", "" },
			{ "shounka_rs6_violet", "" },
			{ "shounka_rs6_orange", "" },
			{ "shounka_a3_audiq7_bleu", "" }
        };
    };

    class bmw {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "cl3_z4_2008_white", "" },
			{ "cl3_z4_2008_purple", "" },
			{ "cl3_z4_2008_navy_blue", "" },
			{ "cl3_z4_2008_lime", "" },
			{ "cl3_z4_2008_light_yellow", "" },
			{ "cl3_z4_2008_light_blue", "" },
			{ "cl3_z4_2008_grey", "" },
			{ "cl3_z4_2008_burgundy", "" },
			{ "cl3_z4_2008_black", "" },
			{ "Mrshounka_bmwm1_civ_noir", "" },
			{ "Mrshounka_bmwm1_civ_bleufonce", "" },
			{ "Mrshounka_bmwm1_civ_rouge", "" },
			{ "Mrshounka_bmwm1_civ_jaune", "" },
			{ "Mrshounka_bmwm1_civ_rose", "" },
			{ "Mrshounka_bmwm1_civ_grise", "" },
			{ "Mrshounka_bmwm1_civ_violet", "" },
			{ "Mrshounka_bmwm1_civ_orange", "" },
			{ "Mrshounka_bmwm6_noir", "" },
			{ "Mrshounka_bmwm6_bleufonce", "" },
			{ "Mrshounka_bmwm6_rouge", "" },
			{ "Mrshounka_bmwm6_jaune", "" },
			{ "Mrshounka_bmwm6_rose", "" },
			{ "Mrshounka_bmwm6_grise", "" },
			{ "Mrshounka_bmwm6_violet", "" },
			{ "Mrshounka_bmwm6_orange", "" },
			{ "cl3_e60_m5_white", "" },
			{ "cl3_e60_m5_purple", "" },
			{ "cl3_e60_m5_navy_blue", "" },
			{ "cl3_e60_m5_lime", "" },
			{ "cl3_e60_m5_light_yellow", "" },
			{ "cl3_e60_m5_light_blue", "" },
			{ "cl3_e60_m5_grey", "" },
			{ "cl3_e60_m5_burgundy", "" },
			{ "cl3_e60_m5_black", "" }
        };
    };
	
    class lkw {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "C_Van_01_box_F", "" },
			{ "C_Van_01_transport_F", "" },
			{ "CL3_Zamak_Transport_open_01", "" },
			{ "CL3_Zamak_Transport_covered_01", "" },
			{ "CL3_Zamak_Transport_open_02", "" },
			{ "CL3_Zamak_Transport_covered_02", "" },
			{ "CL3_Zamak_Transport_open_03", "" },
			{ "CL3_Zamak_Transport_covered_03", "" },
			{ "CL3_Zamak_Transport_open_04", "" },
			{ "CL3_Zamak_Transport_covered_04", "" },
	//Renault LKW
			{ "shounka_a3_renaultmagnum_f", "" },
	//Man LKW
			{ "Jonzie_Flat_Bed", "" },
			{ "Jonzie_Box_Truck", "" },
			{ "Jonzie_Log_Truck", "" },	
	//Mack LKW
			{ "cl3_mackr_blue", "" },
			{ "Jonzie_Superliner", "" },
			{ "cl3_mackr_flat_blue", "" },
			{ "cl3_mackr_del_blue", "" }
        };
    };
	
    class bus {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "RDS_Ikarus_Civ_01", "" },
			{ "RDS_Ikarus_Civ_02", "" },
			{ "CL3_bus_cl_blue", "" },
			{ "CL3_bus_cl_green", "" },
			{ "CL3_bus_cl_yellow", "" },
			{ "CL3_bus_cl_purple", "" },
			{ "CL3_bus_cl_grey", "" },
			{ "CL3_bus_cl_black", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "license_civ_driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat";
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir";
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking";
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking";
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat";
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking";
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking";
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking";
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking";
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 175;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking";
        price = 17500;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        conditions = "license_civ_pilot || {license_med_mAir}";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg}";
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking";
        price = 250000;
        textures[] = {};
    };
	
    class RDS_S1203_Civ_01 {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 150;
        textures[] = {};
    };
	
    class cl3_civic_vti_yellow {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 150;
        textures[] = {};
    };
	
    class cl3_volha_black {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 300;
        textures[] = {};
    };
	
    class cl3_lada_red {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 300;
        textures[] = {};
    };
	
    class RDS_Lada_Civ_01 {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 400;
        textures[] = {};
    };
	
    class RDS_Lada_Civ_02 {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 400;
        textures[] = {};
    };
	
    class RDS_Lada_Civ_03 {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 400;
        textures[] = {};
    };
	
    class RDS_Lada_Civ_04 {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 400;
        textures[] = {};
    };
	
    class cl3_amc_pacer_yellow {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 500;
        textures[] = {};
    };
	
    class Jonzie_Mini_Cooper {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 600;
        textures[] = {};
    };
	
    class Jonzie_Mini_Cooper_R_spec {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 2500;
        textures[] = {};
    };
		
    class cl3_defender_110_yellow {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 800;
        textures[] = {};
    };
	
    class  {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 900;
        textures[] = {};
    };
	
    class Jonzie_Galant {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 1000;
        textures[] = {};
    };
	
    class D_Cobalt_Yellow {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 1500;
        textures[] = {};
    };
	
    class Jonzie_VE {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Jonzie_Ute {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Jonzie_Quattroporte {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
    class Mrshounka_lincoln_noir {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_lincoln_bleufonce {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_lincoln_rouge {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_lincoln_jaune {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_lincoln_rose {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_lincoln_grise {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_lincoln_violet {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_lincoln_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_mercedes_190_p_noir {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 16000;
        textures[] = {};
    };
	
    class Mrshounka_mercedes_190_p_bleufonce {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 16000;
        textures[] = {};
    };
	
    class Mrshounka_mercedes_190_p_rouge {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 16000;
        textures[] = {};
    };
	
    class Mrshounka_mercedes_190_p_jaune {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 16000;
        textures[] = {};
    };
	
    class Mrshounka_mercedes_190_p_rose {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 16000;
        textures[] = {};
    };
	
    class Mrshounka_mercedes_190_p_grise {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 16000;
        textures[] = {};
    };
	
    class Mrshounka_mercedes_190_p_violet {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 16000;
        textures[] = {};
    };
	
    class Mrshounka_mercedes_190_p_orange {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 16000;
        textures[] = {};
    };
	
    class Mrshounka_Vandura_civ_noir {
        vItemSpace = 85;
        conditions = "license_civ_driver";
        price = 22500;
        textures[] = {};
    };
	
    class Mrshounka_Vandura_civ_bleufonce {
        vItemSpace = 85;
        conditions = "license_civ_driver";
        price = 22500;
        textures[] = {};
    };
	
    class Mrshounka_Vandura_civ_rouge {
        vItemSpace = 85;
        conditions = "license_civ_driver";
        price = 22500;
        textures[] = {};
    };
	
    class Mrshounka_Vandura_civ_jaune {
        vItemSpace = 85;
        conditions = "license_civ_driver";
        price = 22500;
        textures[] = {};
    };
	
    class Mrshounka_Vandura_civ_rose {
        vItemSpace = 85;
        conditions = "license_civ_driver";
        price = 22500;
        textures[] = {};
    };
	
    class Mrshounka_Vandura_civ_grise {
        vItemSpace = 85;
        conditions = "license_civ_driver";
        price = 22500;
        textures[] = {};
    };
	
    class Mrshounka_Vandura_civ_violet {
        vItemSpace = 85;
        conditions = "license_civ_driver";
        price = 22500;
        textures[] = {};
    };
	
    class Mrshounka_Vandura_civ_orange {
        vItemSpace = 85;
        conditions = "license_civ_driver";
        price = 22500;
        textures[] = {};
    };
	
    class S_McLarenP1_Black {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 67500;
        textures[] = {};
    };
	
    class S_McLarenP1_Blue {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 67500;
        textures[] = {};
    };
	
    class S_McLarenP1_Orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 67500;
        textures[] = {};
    };
	
    class S_McLarenP1_White {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 67500;
        textures[] = {};
    };
	
    class S_McLarenP1_Yellow {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 67500;
        textures[] = {};
    };
	
    class S_McLarenP1_Silver {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 67500;
        textures[] = {};
    };
	
    class shounka_mp4_noir {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	
    class shounka_mp4_bleufonce {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	
    class shounka_mp4_rouge {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	
    class shounka_mp4_jaune {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	
    class shounka_mp4_rose {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	
    class shounka_mp4_grise {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	
    class shounka_mp4_violet {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	
    class shounka_mp4_orange {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	
    class Jonzie_STI {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
    class Mrshounka_subaru08_noir {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
    class Mrshounka_subaru08_bleufonce {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
    class Mrshounka_subaru08_rouge {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
    class Mrshounka_subaru08_jaune {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
    class Mrshounka_subaru08_rose {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
    class Mrshounka_subaru08_grise {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
    class Mrshounka_subaru08_violet {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
    class Mrshounka_subaru08_orange {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
    class S_Skyline_Red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
    class S_Skyline_Blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
    class S_Skyline_Black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
    class S_Skyline_Yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
    class S_Skyline_Purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
    class S_Skyline_White {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
    class cl3_range_rover_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 10000;
        textures[] = {};
    };
	
    class cl3_range_rover_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 10000;
        textures[] = {};
    };
	
    class cl3_range_rover_navy_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 10000;
        textures[] = {};
    };
	
    class cl3_range_rover_lime {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 10000;
        textures[] = {};
    };
	
    class cl3_range_rover_light_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 10000;
        textures[] = {};
    };
	
    class cl3_range_rover_light_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 10000;
        textures[] = {};
    };
	
    class cl3_range_rover_grey {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 10000;
        textures[] = {};
    };
	
    class cl3_range_rover_burgundy {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 10000;
        textures[] = {};
    };
	
    class cl3_range_rover_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 10000;
        textures[] = {};
    };

    class bv_the_crowner_uc {
        vItemSpace = 50;
        conditions = "license_cop_fbi";
        price = 1250;
        textures[] = {};
    };
	
	class cl3_escalade_patrolwb {
        vItemSpace = 50;
        conditions = "license_cop_fbi";
        price = 1250;
        textures[] = {};
	};

    class bv_the_crowner_cop_sher {
        vItemSpace = 50;
        conditions = "license_cop_fbi";
        price = 1250;
        textures[] = {};
    };	
	
    class cl3_dodge_charger_patrol {
        vItemSpace = 50;
        conditions = "";
        price = 1250;
        textures[] = {};
    };
	
    class cl3_dodge_charger_patrol2 {
        vItemSpace = 50;
        conditions = "";
        price = 1250;
        textures[] = {};
    };
	
    class cl3_reventon_clpd {
        vItemSpace = 50;
        conditions = "";
        price = 1250;
        textures[] = {};
    };
	
    class CL3_bike_bmx_roadskin_flame2 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
    };
	
    class CL3_bike_bike_roadskin_flame2 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
    };	

    class cl3_suv_taxi {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Jonzie_Escalade {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	
    class Mrshounka_cherokee_noir_bleu {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_cherokee_noir_bleu_mat {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_cherokee_noir_blanc {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_cherokee_noir_blanc_mat {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_cherokee_noir_violet {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_cherokee_noir_violet_mat {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_cherokee_noir_rouge {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_cherokee_noir_rouge_mat {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class cl3_civic_vti_white {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class cl3_civic_vti_purple {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class cl3_civic_vti_navy_blue {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class cl3_civic_vti_lime {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class cl3_civic_vti_light_yellow {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class cl3_civic_vti_light_blue {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class cl3_civic_vti_grey {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };

    class cl3_civic_vti_burgundy {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class cl3_civic_vti_black {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_megane_rs_2015_noir {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_megane_rs_2015_bleufonce {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_megane_rs_2015_rouge {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_megane_rs_2015_jaune {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_megane_rs_2015_rose {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_megane_rs_2015_grise {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_megane_rs_2015_violet {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_megane_rs_2015_orange {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_r5_noir {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_r5_bleufonce {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_r5_rouge {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_r5_jaune {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_r5_rose {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_r5_grise {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_r5_violet {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_r5_orange {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_twingo_p_noir {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {};
    };
	
    class Mrshounka_twingo_p_bf {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {};
    };
	
    class Mrshounka_twingo_p_r {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {};
    };
	
    class Mrshounka_twingo_p_j {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {};
    };
	
    class Mrshounka_twingo_p_rose {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {};
    };
	
    class Mrshounka_twingo_p_g {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {};
    };
	
    class Mrshounka_twingo_p_v {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {};
    };
	
    class Mrshounka_twingo_p_o {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {};
    };
	
    class shounka_a3_cliors_civ_noir {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15500;
        textures[] = {};
    };
	
    class shounka_a3_cliors_civ_bleufonce {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15500;
        textures[] = {};
    };
	
    class shounka_a3_cliors_civ_rouge {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15500;
        textures[] = {};
    };
	
    class shounka_a3_cliors_civ_jaune {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15500;
        textures[] = {};
    };
	
    class shounka_a3_cliors_civ_rose {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15500;
        textures[] = {};
    };
	
    class shounka_a3_cliors_civ_grise {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15500;
        textures[] = {};
    };
	
    class shounka_a3_cliors_civ_violet {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15500;
        textures[] = {};
    };
	
    class shounka_a3_cliors_civ_orange {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 15500;
        textures[] = {};
    };
	
    class Mrshounka_207_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_207_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_207_rouge {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_207_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_207_rose {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_207_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_207_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_207_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_rcz_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_rcz_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_rcz_rouge {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_rcz_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_rcz_rose {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_rcz_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_rcz_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_rcz_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_civ_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 16500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_civ_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 16500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_civ_rouge {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 16500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_civ_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 16500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_civ_rose {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 16500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_civ_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 16500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_civ_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 16500;
        textures[] = {};
    };
	
    class Mrshounka_a3_308_civ_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 16500;
        textures[] = {};
    };
	
    class shounka_a3_peugeot508_civ_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class shounka_a3_peugeot508_civ_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class shounka_a3_peugeot508_civ_rouge {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class shounka_a3_peugeot508_civ_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class shounka_a3_peugeot508_civ_rose {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class shounka_a3_peugeot508_civ_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class shounka_a3_peugeot508_civ_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class shounka_a3_peugeot508_civ_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_a3_ds3_civ_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_a3_ds3_civ_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_a3_ds3_civ_civ_rouge {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_a3_ds3_civ_civ_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_a3_ds3_civ_civ_rose {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_a3_ds3_civ_civ_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_a3_ds3_civ_civ_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class Mrshounka_a3_ds3_civ_civ_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
    class shounka_a3_ds4_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 18500;
        textures[] = {};
    };
	
    class shounka_a3_ds4_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 18500;
        textures[] = {};
    };
	
    class shounka_a3_ds4_rouge {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 18500;
        textures[] = {};
    };
	
    class shounka_a3_ds4_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 18500;
        textures[] = {};
    };
	
    class shounka_a3_ds4_rose {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 18500;
        textures[] = {};
    };
	
    class shounka_a3_ds4_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 18500;
        textures[] = {};
    };
	
    class shounka_a3_ds4_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 18500;
        textures[] = {};
    };
	
    class shounka_a3_ds4_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 18500;
        textures[] = {};
    };
	
    class Mrshounka_c4_p_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_c4_p_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_c4_p_rouge {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_c4_p_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_c4_p_rose {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_c4_p_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_c4_p_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_c4_p_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 17500;
        textures[] = {};
    };
	
    class Mrshounka_Alfa_Romeo_noir {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_Alfa_Romeo_bleufonce {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_Alfa_Romeo_rouge {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_Alfa_Romeo_jaune {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_Alfa_Romeo_rose {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_Alfa_Romeo_grise {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_Alfa_Romeo_violet {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_Alfa_Romeo_orange {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_evox_noir {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_evox_bleufonce {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_evox_rouge {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_evox_jaune {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_evox_rose {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_evox_grise {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_evox_violet {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class Mrshounka_evox_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class shounka_transam_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 51000;
        textures[] = {};
    };
	
    class shounka_transam_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 51000;
        textures[] = {};
    };
	
    class shounka_transam_rouge {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 51000;
        textures[] = {};
    };
	
    class shounka_transam_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 51000;
        textures[] = {};
    };
	
    class shounka_transam_rose {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 51000;
        textures[] = {};
    };
	
    class shounka_transam_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 51000;
        textures[] = {};
    };
	
    class shounka_transam_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 51000;
        textures[] = {};
    };
	
    class shounka_transam_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 51000;
        textures[] = {};
    };
	
    class Mrshounka_hummer_civ_noir {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_hummer_civ_bleufonce {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_hummer_civ_rouge {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_hummer_civ_jaune {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_hummer_civ_rose {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_hummer_civ_grise {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_hummer_civ_violet {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class Mrshounka_hummer_civ_orange {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
    class shounka_h2_noir {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class shounka_h2_bleufonce {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class shounka_h2_rouge {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class shounka_h2_jaune {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class shounka_h2_rose {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class shounka_h2_grise {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class shounka_h2_violet {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class shounka_h2_orange {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	
    class cl3_enduro_yellow {
        vItemSpace = 5;
        conditions = "license_civ_driver";
        price = 7500;
        textures[] = {};
    };
	
    class cl3_enduro_black {
        vItemSpace = 5;
        conditions = "license_civ_driver";
        price = 7500;
        textures[] = {};
    };
	
    class cl3_enduro_blue {
        vItemSpace = 5;
        conditions = "license_civ_driver";
        price = 7500;
        textures[] = {};
    };
	
    class cl3_enduro_aqua {
        vItemSpace = 5;
        conditions = "license_civ_driver";
        price = 7500;
        textures[] = {};
    };
	
    class cl3_enduro_babypink {
        vItemSpace = 5;
        conditions = "license_civ_driver";
        price = 7500;
        textures[] = {};
    };
	
    class cl3_enduro_red {
        vItemSpace = 5;
        conditions = "license_civ_driver";
        price = 7500;
        textures[] = {};
    };
	
    class cl3_enduro_dark_green {
        vItemSpace = 5;
        conditions = "license_civ_driver";
        price = 7500;
        textures[] = {};
    };
	
    class cl3_chopper_blue {
        vItemSpace = 10;
        conditions = "license_civ_driver";
        price = 10000;
        textures[] = {};
    };
	
    class cl3_chopper_green {
        vItemSpace = 10;
        conditions = "license_civ_driver";
        price = 10000;
        textures[] = {};
    };
	
    class cl3_chopper_red {
        vItemSpace = 10;
        conditions = "license_civ_driver";
        price = 10000;
        textures[] = {};
    };
	
    class mrshounka_huracan_c_noir {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	
    class mrshounka_huracan_c_bleufonce {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	
    class mrshounka_huracan_c_rouge {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	
    class mrshounka_huracan_c_jaune {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	
    class mrshounka_huracan_c_rose {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	
    class mrshounka_huracan_c_grise {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	
    class mrshounka_huracan_c_violet {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	
    class mrshounka_huracan_c_orange {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	
    class cl3_murcielago_white {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	
    class cl3_murcielago_purple {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	
    class cl3_murcielago_navy_blue {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	
    class cl3_murcielago_lime {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	
    class cl3_murcielago_light_yellow {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	
    class cl3_murcielago_light_blue {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	
    class cl3_murcielago_grey {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };

    class cl3_murcielago_burgundy {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	
    class cl3_murcielago_black {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	
    class Mrshounka_veneno_c_noir {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 80000;
        textures[] = {};
    };
	
    class Mrshounka_veneno_c_bleu {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 80000;
        textures[] = {};
    };
	
    class Mrshounka_veneno_c_jaune {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 80000;
        textures[] = {};
    };

    class cl3_reventon_white {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
    };
	
    class cl3_reventon_purple {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
    };
	
    class cl3_reventon_navy_blue {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
    };
	
    class cl3_reventon_lime {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
    };
	
    class cl3_reventon_light_yellow {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
    };
	
    class cl3_reventon_light_blue {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
    };
	
    class cl3_reventon_grey {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
    };

    class cl3_reventon_burgundy {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
    };
	
    class cl3_reventon_black {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
    };
	
    class cl3_lamborghini_gt1_white {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
    };
	
    class cl3_lamborghini_gt1_purple {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
    };
	
    class cl3_lamborghini_gt1_navy_blue {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
    };
	
    class cl3_lamborghini_gt1_lime {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
    };
	
    class cl3_lamborghini_gt1_light_yellow {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
    };
	
    class cl3_lamborghini_gt1_light_blue {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
    };
	
    class cl3_lamborghini_gt1_grey {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
    };

	    class cl3_lamborghini_gt1_burgundy {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
    };
	    class cl3_lamborghini_gt1_black {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
    };
	    class S_PorscheRS_Black {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class S_PorscheRS_White {
        vItemSpace = 30;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class cl3_carrera_gt_white {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_carrera_gt_purple {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_carrera_gt_navy_blue {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_carrera_gt_lime {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_carrera_gt_light_blue {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_carrera_gt_grey {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };

	    class cl3_carrera_gt_burgundy {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_carrera_gt_black {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class Mrshounka_cayenne_p_noir {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 70000;
        textures[] = {};
    };
	    class Mrshounka_cayenne_p_bleufonce {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 70000;
        textures[] = {};
    };
	    class Mrshounka_cayenne_p_rouge {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 70000;
        textures[] = {};
    };
	    class Mrshounka_cayenne_p_jaune {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 70000;
        textures[] = {};
    };
	    class Mrshounka_cayenne_p_rose {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 70000;
        textures[] = {};
    };
	    class Mrshounka_cayenne_p_grise {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 70000;
        textures[] = {};
    };
	    class Mrshounka_cayenne_p_violet {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 70000;
        textures[] = {};
    };
	    class Mrshounka_cayenne_p_orange {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 70000;
        textures[] = {};
    };
	    class shounka_porsche911_noir {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class shounka_porsche911_bleufonce {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class shounka_porsche911_rouge {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class shounka_porsche911_jaune {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class shounka_porsche911_rose {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class shounka_porsche911_grise {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class shounka_porsche911_violet {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class shounka_porsche911_orange {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class mrshounka_92_civ_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 52500;
        textures[] = {};
    };
	    class mrshounka_92_civ_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 52500;
        textures[] = {};
    };
	    class mrshounka_92_civ_rouge {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 52500;
        textures[] = {};
    };
	    class mrshounka_92_civ_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 52500;
        textures[] = {};
    };
	    class mrshounka_92_civ_rose {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 52500;
        textures[] = {};
    };
	    class mrshounka_92_civ_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 52500;
        textures[] = {};
    };
	    class mrshounka_92_civ_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 52500;
        textures[] = {};
    };
	    class mrshounka_92_civ_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 52500;
        textures[] = {};
    };
	    class cl3_458_white {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_458_purple {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_458_navy_blue {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_458_lime {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_458_light_yellow {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_458_light_blue {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_458_grey {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };

	    class cl3_458_burgundy {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class cl3_458_black {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
    };
	    class shounka_f430_spider_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	    class shounka_f430_spider_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	    class shounka_f430_spider_rouge {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	    class shounka_f430_spider_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	    class shounka_f430_spider_rose {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	    class shounka_f430_spider_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	    class shounka_f430_spider_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	    class shounka_f430_spider_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
    };
	    class cl3_dodge_charger_f_white {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	    class cl3_dodge_charger_f_purple {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	    class cl3_dodge_charger_f_blue {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	    class cl3_dodge_charger_f_lime {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	    class cl3_dodge_charger_f_grey {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	    class cl3_dodge_charger_f_black {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	    class cl3_dodge_charger_f_darkgreen {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	    class cl3_dodge_charger_f_darkred {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {};
    };
	    class Jonzie_Viper {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	    class S_Vantage_Red {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	    class S_Vantage_Blue {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	    class S_Vantage_Black {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	    class S_Vantage_Yellow {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	    class S_Vantage_LightBlue {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	    class S_Vantage_Purple {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	    class S_Vantage_White {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	    class cl3_dbs_volante_white {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class cl3_dbs_volante_purple {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class cl3_dbs_volante_navy_blue {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class cl3_dbs_volante_lime {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class cl3_dbs_volante_light_yellow {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class cl3_dbs_volante_light_blue {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class cl3_dbs_volante_grey {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };

	    class cl3_dbs_volante_burgundy {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class cl3_dbs_volante_black {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	    class Mrshounka_agera_p_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
    };
	    class Mrshounka_agera_p_bleu {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
    };
	    class Mrshounka_agera_p_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
    };
	    class Mrshounka_lykan_c_noir {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
    };
	    class Mrshounka_lykan_c_bleufonce {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
    };
	    class Mrshounka_lykan_c_rouge {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
    };
	    class Mrshounka_lykan_c_jaune {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
    };
	    class Mrshounka_lykan_c_rose {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
    };
	    class Mrshounka_lykan_c_grise {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
    };
	    class Mrshounka_lykan_c_violet {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
    };
	    class Mrshounka_lykan_c_orange {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
    };
	    class RDS_Golf4_Civ_01 {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 1000;
        textures[] = {};
    };
	    class cl3_golf_mk2_white {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	    class cl3_golf_mk2_purple {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	    class cl3_golf_mk2_navy_blue {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	    class cl3_golf_mk2_lime {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	    class cl3_golf_mk2_light_yellow {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	    class cl3_golf_mk2_light_blue {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	    class cl3_golf_mk2_grey {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	    class cl3_golf_mk2_burgundy {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	    class cl3_golf_mk2_black {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	    class cl3_polo_gti_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	    class cl3_polo_gti_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	    class cl3_polo_gti_navy_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	    class cl3_polo_gti_lime {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	    class cl3_polo_gti_light_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	    class cl3_polo_gti_light_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	    class cl3_polo_gti_grey {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	    class cl3_polo_gti_burgundy {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	    class cl3_polo_gti_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	    class Mrshounka_Volkswagen_Touareg_noir {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	    class Mrshounka_Volkswagen_Touareg_bleufonce {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	    class Mrshounka_Volkswagen_Touareg_rouge {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	    class Mrshounka_Volkswagen_Touareg_jaune {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	    class Mrshounka_Volkswagen_Touareg_rose {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	    class Mrshounka_Volkswagen_Touareg_grise {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	    class Mrshounka_Volkswagen_Touareg_violet {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	    class Mrshounka_Volkswagen_Touareg_orange {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
    };
	    class cl3_veyron_blk_wht {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class cl3_veyron_lblue_dblue {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class cl3_veyron_lblue_lblue {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class cl3_veyron_brn_blk {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class Mrshounka_pagani_c_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class Mrshounka_pagani_c_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class Mrshounka_pagani_c_rouge {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class Mrshounka_pagani_c_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class Mrshounka_pagani_c_rose {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class Mrshounka_pagani_c_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class Mrshounka_pagani_c_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class Mrshounka_pagani_c_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class shounka_limo_civ_noir {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class shounka_limo_civ_bleufonce {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class shounka_limo_civ_rouge {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class shounka_limo_civ_jaune {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class shounka_limo_civ_rose {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class shounka_limo_civ_grise {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class shounka_limo_civ_violet {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class shounka_limo_civ_orange {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
    };
	    class shounka_buggy_noir {
        vItemSpace = 15;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
    };
	    class shounka_buggy_grise {
        vItemSpace = 15;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
    };
	    class shounka_buggy_rouge {
        vItemSpace = 15;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
    };
	    class shounka_buggy_jauwne {
        vItemSpace = 15;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
    };
	    class shounka_buggy_bleufonce {
        vItemSpace = 15;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
    };
	    class shounka_buggy_violet {
        vItemSpace = 15;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
    };
	    class shounka_buggy_orange {
        vItemSpace = 15;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
    };
	    class shounka_buggy_rose {
        vItemSpace = 15;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
    };
	    class Jonzie_Transit {
        vItemSpace = 90;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {};
    };
	    class Jonzie_Raptor {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {};
    };
	    class Jonzie_XB {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 13000;
        textures[] = {};
    };
	    class shounka_gt_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	    class shounka_gt_bleufonce {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
		
	    class shounka_gt_rouge {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	
	    class shounka_gt_jaune {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	
	    class shounka_gt_rose {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	
	    class shounka_gt_grise {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	
	    class shounka_gt_violet {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	
	    class shounka_gt_orange {
        vItemSpace = 35;
        conditions = "license_civ_driver";
        price = 20000;
        textures[] = {};
    };
	
	    class Mrshounka_mustang_noir {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
	    class Mrshounka_mustang_mat_n {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
	    class Mrshounka_mustang_bleufonce {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
	    class Mrshounka_mustang_mat_b {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
	    class Mrshounka_mustang_rouge {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
	    class Mrshounka_mustang_jaune {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
	    class Mrshounka_mustang_rose {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
	    class Mrshounka_mustang_grise {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
	    class Mrshounka_mustang_violet {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };
	
	    class Mrshounka_mustang_orange {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
    };

	    class Mrshounka_raptor2_noir {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 27000;
        textures[] = {};
    };
	
	    class Mrshounka_raptor2_bleufonce {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 27000;
        textures[] = {};
    };
	
	    class Mrshounka_raptor2_rouge {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 27000;
        textures[] = {};
    };
	
	    class Mrshounka_raptor2_jaune {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 27000;
        textures[] = {};
    };
	
	    class Mrshounka_raptor2_rose {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 27000;
        textures[] = {};
    };
	
	    class Mrshounka_raptor2_grise {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 27000;
        textures[] = {};
    };
	
	    class Mrshounka_raptor2_violet {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 27000;
        textures[] = {};
    };
	
	    class Mrshounka_raptor2_orange {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 27000;
        textures[] = {};
    };
	
	    class cl3_insignia_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
	    class cl3_insignia_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
	    class cl3_insignia_navy_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
	    class cl3_insignia_lime {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
	    class cl3_insignia_light_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
	    class cl3_insignia_light_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
	    class cl3_insignia_grey {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
	    class cl3_insignia_burgundy {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
	    class cl3_insignia_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 27500;
        textures[] = {};
    };
	
	    class cl3_e63_amg_white {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class cl3_e63_amg_purple {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class cl3_e63_amg_navy_blue {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class cl3_e63_amg_lime {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class cl3_e63_amg_light_yellow {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class cl3_e63_amg_light_blue {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class cl3_e63_amg_grey {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class cl3_e63_amg_burgundy {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class cl3_e63_amg_black {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class Mrshounka_c63_2015_noir {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class Mrshounka_c63_2015_mat_n {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class Mrshounka_c63_2015_bleufonce {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class Mrshounka_c63_2015_mat_b {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class Mrshounka_c63_2015_rouge {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class Mrshounka_c63_2015_jaune {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class Mrshounka_c63_2015_rose {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class Mrshounka_c63_2015_grise {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class Mrshounka_c63_2015_violet {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class Mrshounka_c63_2015_orange {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class shounka_clk_noir {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class shounka_clk_bleufonce {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class shounka_clk_rouge {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class shounka_clk_jaune {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class shounka_clk_rose {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class shounka_clk_grise {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class shounka_clk_violet {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class shounka_clk_orange {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class shounka_a3_spr_civ_noir {
        vItemSpace = 150;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class shounka_a3_spr_civ_bleufonce {
        vItemSpace = 150;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class shounka_a3_spr_civ_rouge {
        vItemSpace = 150;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class shounka_a3_spr_civ_jaune {
        vItemSpace = 150;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class shounka_a3_spr_civ_rose {
        vItemSpace = 150;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class shounka_a3_spr_civ_grise {
        vItemSpace = 150;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class shounka_a3_spr_civ_violet {
        vItemSpace = 150;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class shounka_a3_spr_civ_orange {
        vItemSpace = 150;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class Mrshounka_a3_smart_civ_noir {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {};
    };
	
	    class Mrshounka_a3_smart_civ_bleu {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {};
    };
	
	    class shounka_a3_audiq7_v2_gendarmerie {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
	
	    class shounka_a3_rs5_civ_noir {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class shounka_a3_rs5_civ_bleufonce {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class shounka_a3_rs5_civ_rouge {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class shounka_a3_rs5_civ_jaune {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class shounka_a3_rs5_civ_rose {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class shounka_a3_rs5_civ_grise {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class shounka_a3_rs5_civ_violet {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class shounka_a3_rs5_civ_orange {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class cl3_r8_spyder_white {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class cl3_r8_spyder_purple {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class cl3_r8_spyder_navy_blue {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class cl3_r8_spyder_lime {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class cl3_r8_spyder_light_yellow {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class cl3_r8_spyder_light_blue {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class cl3_r8_spyder_grey {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class cl3_r8_spyder_burgundy {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class cl3_r8_spyder_black {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
    };
	
	    class Mrshounka_rs4_civ_noir {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 38000;
        textures[] = {};
    };
	
	    class Mrshounka_rs4_civ_bleufonce {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 38000;
        textures[] = {};
    };
	
	    class Mrshounka_rs4_civ_rouge {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 38000;
        textures[] = {};
    };
	
	    class Mrshounka_rs4_civ_jaune {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 38000;
        textures[] = {};
    };
	
	    class Mrshounka_rs4_civ_rose {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 38000;
        textures[] = {};
    };
	
	    class Mrshounka_rs4_civ_grise {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 38000;
        textures[] = {};
    };
	
	    class Mrshounka_rs4_civ_violet {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 38000;
        textures[] = {};
    };
	
	    class Mrshounka_rs4_civ_orange {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 38000;
        textures[] = {};
    };
	
	    class shounka_rs6_noir {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 42000;
        textures[] = {};
    };
	
	    class shounka_rs6_bleufonce {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 42000;
        textures[] = {};
    };
	
	    class shounka_rs6_rouge {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 42000;
        textures[] = {};
    };
	
	    class shounka_rs6_jaune {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 42000;
        textures[] = {};
    };
	
	    class shounka_rs6_rose {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 42000;
        textures[] = {};
    };
	
	    class shounka_rs6_grise {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 42000;
        textures[] = {};
    };
	
	    class shounka_rs6_violet {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 42000;
        textures[] = {};
    };
	
	    class shounka_rs6_orange {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 42000;
        textures[] = {};
    };
	
	    class shounka_a3_audiq7_bleu {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 42000;
        textures[] = {};
    };
	
	    class cl3_z4_2008_white {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 37500;
        textures[] = {};
    };
	
	    class cl3_z4_2008_purple {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 37500;
        textures[] = {};
    };
	
	    class cl3_z4_2008_navy_blue {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 37500;
        textures[] = {};
    };
	
	    class cl3_z4_2008_lime {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 37500;
        textures[] = {};
    };
	
	    class cl3_z4_2008_light_yellow {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 37500;
        textures[] = {};
    };
	
	    class cl3_z4_2008_light_blue {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 37500;
        textures[] = {};
    };
	
	    class cl3_z4_2008_grey {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 37500;
        textures[] = {};
    };
	
	    class cl3_z4_2008_burgundy {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 37500;
        textures[] = {};
    };
	
	    class cl3_z4_2008_black {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 37500;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm1_civ_noir {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm1_civ_bleufonce {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm1_civ_rouge {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm1_civ_jaune {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm1_civ_rose {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm1_civ_grise {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm1_civ_violet {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm1_civ_orange {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {};
    };

	    class Mrshounka_bmwm6_noir {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm6_bleufonce {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm6_rouge {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm6_jaune {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm6_rose {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm6_grise {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm6_violet {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class Mrshounka_bmwm6_orange {
        vItemSpace = 55;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
    };
	
	    class cl3_e60_m5_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
	    class cl3_e60_m5_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
	    class cl3_e60_m5_navy_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
	    class cl3_e60_m5_lime {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
	    class cl3_e60_m5_light_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
	    class cl3_e60_m5_light_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
	    class cl3_e60_m5_grey {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
	    class cl3_e60_m5_burgundy {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
	    class cl3_e60_m5_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {};
    };
	
	    class CL3_Zamak_Transport_open_01 {
        vItemSpace = 225;
        conditions = "license_civ_trucking";
        price = 55000;
        textures[] = {};
    };
	
	    class CL3_Zamak_Transport_open_02 {
        vItemSpace = 225;
        conditions = "license_civ_trucking";
        price = 55000;
        textures[] = {};
    };
	
	    class CL3_Zamak_Transport_open_03 {
        vItemSpace = 225;
        conditions = "license_civ_trucking";
        price = 55000;
        textures[] = {};
    };
	
	    class CL3_Zamak_Transport_open_04 {
        vItemSpace = 225;
        conditions = "license_civ_trucking";
        price = 55000;
        textures[] = {};
    };
	
	    class CL3_Zamak_Transport_covered_01 {
        vItemSpace = 325;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {};
    };
	
	    class CL3_Zamak_Transport_covered_02 {
        vItemSpace = 325;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {};
    };
	
	    class CL3_Zamak_Transport_covered_03 {
        vItemSpace = 325;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {};
    };
	
	    class CL3_Zamak_Transport_covered_04 {
        vItemSpace = 325;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {};
    };
	
	    class Jonzie_Western {
        vItemSpace = 200;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {};
    };
	
	    class shounka_a3_renaultmagnum_f {
        vItemSpace = 350;
        conditions = "license_civ_trucking";
        price = 80000;
        textures[] = {};
    };
	
	    class Jonzie_Flat_Bed {
        vItemSpace = 300;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {};
    };
	
	    class Jonzie_Box_Truck {
        vItemSpace = 350;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {};
    };
	
	    class Jonzie_Log_Truck {
        vItemSpace = 325;
        conditions = "license_civ_trucking";
        price = 80000;
        textures[] = {};
    };
	
	    class cl3_mackr_blue {
        vItemSpace = 225;
        conditions = "license_civ_trucking";
        price = 70000;
        textures[] = {};
    };
	
	    class Jonzie_Superliner {
        vItemSpace = 200;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {};
    };
	
	    class cl3_mackr_flat_blue {
        vItemSpace = 300;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {};
    };
	
	    class cl3_mackr_del_blue {
        vItemSpace = 350;
        conditions = "license_civ_trucking";
        price = 80000;
        textures[] = {};
    };
	
	    class RDS_Ikarus_Civ_01 {
        vItemSpace = 45;
        conditions = "bus";
        price = 12500;
        textures[] = {};
    };
	
	    class RDS_Ikarus_Civ_02 {
        vItemSpace = 45;
        conditions = "bus";
        price = 12500;
        textures[] = {};
    };
	
	    class CL3_bus_cl_blue {
        vItemSpace = 50;
        conditions = "bus";
        price = 15000;
        textures[] = {};
    };
	
	    class CL3_bus_cl_green {
        vItemSpace = 50;
        conditions = "bus";
        price = 15000;
        textures[] = {};
    };
	
	    class CL3_bus_cl_yellow {
        vItemSpace = 50;
        conditions = "bus";
        price = 15000;
        textures[] = {};
    };
	
	    class CL3_bus_cl_purple {
        vItemSpace = 50;
        conditions = "bus";
        price = 15000;
        textures[] = {};
    };
	
	    class CL3_bus_cl_grey {
        vItemSpace = 50;
        conditions = "bus";
        price = 15000;
        textures[] = {};
    };
	
	    class CL3_bus_cl_black {
        vItemSpace = 50;
        conditions = "bus";
        price = 15000;
        textures[] = {};
    };
	
	    class cg_jeep_blinde_noir {
        vItemSpace = 40;
        conditions = "";
        price = 25000;
        textures[] = {};
	};
	    class cg_jeep_blinde_white {
        vItemSpace = 40;
        conditions = "";
        price = 90000;
        textures[] = {};
	};
	  
		class cg_jeep_blinde_rouge {
        vItemSpace = 40;
        conditions = "";
        price = 25000;
        textures[] = {};
	};
	
	    class shounka_monsteur {
        vItemSpace = 50;
        conditions = "";
        price = 45000;
        textures[] = {};
	};
	  
	    class shounka_monsteur_bleufonce {
        vItemSpace = 50;
        conditions = "";
        price = 45000;
        textures[] = {};
	};
	
        class shounka_monsteur_grise {
        vItemSpace = 50;
        conditions = "";
        price = 45000;
        textures[] = {};
	};
	
        class shounka_monsteur_jaune {
        vItemSpace = 50;
        conditions = "";
        price = 45000;
        textures[] = {};
	};
	
        class shounka_monsteur_noir {
        vItemSpace = 50;
        conditions = "";
        price = 45000;
        textures[] = {};
	};
	
        class shounka_monsteur_orange {
        vItemSpace = 50;
        conditions = "";
        price = 45000;
        textures[] = {};
	};
	
        class shounka_monsteur_rose {
        vItemSpace = 50;
        conditions = "";
        price = 45000;
        textures[] = {};
	};
	
        class shounka_monsteur_rouge {
        vItemSpace = 50;
        conditions = "";
        price = 45000;
        textures[] = {};
	};
	
        class shounka_monsteur_violet {
        vItemSpace = 50;
        conditions = "";
        price = 45000;
        textures[] = {};
	};
	
        class cl3_z4_2008_camo {
        vItemSpace = 35;
        conditions = "";
        price = 26000;
        textures[] = {};
	};
	
        class cl3_carrera_gt_camo {
        vItemSpace = 40;
        conditions = "";
        price = 43000;
        textures[] = {};
	};
	
        class cl3_e63_amg_camo {
        vItemSpace = 35;
        conditions = "";
        price = 24000;
        textures[] = {};
	};
	
        class cl3_taurus_camo {
        vItemSpace = 30;
        conditions = "";
        price = 20000;
        textures[] = {};
	};
	
        class cl3_reventon_camo {
        vItemSpace = 35;
        conditions = "";
        price = 65000;
        textures[] = {};
	};	
        class Jonzie_Forklift {
        vItemSpace = 35;
        conditions = "";
        price = 65000;
        textures[] = {};
	};
        class cl3_enzo_camo {
        vItemSpace = 35;
        conditions = "";
        price = 125000;
        textures[] = {};
	};
        class bv_gtr_spec_v_gold {
        vItemSpace = 35;
        conditions = "";
        price = 135000;
        textures[] = {};
	};
        class cl3_civic_vti_camo {
        vItemSpace = 40;
        conditions = "";
        price = 12000;
        textures[] = {};
	};

        class I_Heli_light_03_unarmed_F {
        vItemSpace = 55;
        conditions = "";
        price = 300000;
        textures[] = {};
	};
	
        class I_Heli_Transport_02_F {
        vItemSpace = 60;
        conditions = "";
        price = 300000;
        textures[] = {};
	};
	
        class EVO_Audi_RS4_PD {
        vItemSpace = 50;
        conditions = "";
        price = 1500;
        textures[] = {};
	};
	
        class bv_the_crowner_cop_emt {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
        class Urbanized_LP700_P {
        vItemSpace = 50;
        conditions = "";
        price = 1500;
        textures[] = {};
	};
	
        class Urbanized_67Mustang_P {
        vItemSpace = 50;
        conditions = "";
        price = 1500;
        textures[] = {};
	};
	
        class Jonzie_Ambulance {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
        class bv_458_cop_patrol {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
         class AM_Holden_EMS {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
         class bv_shelly_cop_patrol {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
         class Jonzie_Tow_Truck {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
         class bv_the_crowner_cop_patrol {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
         class bv_e60_m5_cop_patrol {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
		
	};
	
         class EMS_Orca {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
         class EC635_SAR {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
         class bv_e60_m5_cop_emt {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
         class EC635_DAES_Lifeliner {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
         class FPT_MAN_base_F {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
	class mercedes_atego_pompier_ingame {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
	class shounka_a3_pompier_sprinter {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
	class cl3_escalede_cgs {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
	class cl3_transitk9 {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
	class cl3_q7_clpd_cn {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
	class C_Truck_02_Box_F {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
	class FPT_MAN {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
	class fpt_renault {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
	class fptl_renault {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
	class red_ambulance_08_EMS {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
	class red_explorer_16_e_ems {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};
	
	class red_suburban_15_e_EMS {
        vItemSpace = 50;
        conditions = "";
        price = 2500;
        textures[] = {};
	};

	class shounka_a3_gendsprinter {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_statetrooper {
        vItemSpace = 50;
        conditions = "license_cop_swat";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_statetrooper {
        vItemSpace = 50;
        conditions = "license_cop_swat";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_statetrooper {
        vItemSpace = 50;
        conditions = "license_cop_swat";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_statetrooper {
        vItemSpace = 50;
        conditions = "license_cop_swat";
        price = 10;
        textures[] = {};
	};
	
	class red_explorer_16_p_statetrooper {
        vItemSpace = 50;
        conditions = "license_cop_swat";
        price = 10;
        textures[] = {};
	};
	
	class red_swat_08_p_swat {
        vItemSpace = 50;
        conditions = "license_cop_swat";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_sheriff {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_lvpd {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_lvpd {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_fbi {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_fbi {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_cvpi_06_p_lvpd {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_cvpi_06_p_fbi {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_f350_08_p_lvpd {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_f350_08_p_sheriff {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_explorer_16_p_sheriff {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_explorer_16_p_lvpd {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_explorer_16_p_fbi {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_lvpd {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_fbi {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_lvpd {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_fbi {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};

	class red_suburban_15_p_u_lvpd {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_fbi {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_statetrooper {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_lvpd {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_fbi {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_statetrooper {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_sheriff {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_cvpi_06_p_sheriff {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_sheriff {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_sheriff {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_kawasaki_10_p_sheriff {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_sheriff {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_sheriff {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_sheriff {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_patrol {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_patrol {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_patrol {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_patrol {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_sert {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_sert {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_sert{
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_sert {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_trooper {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_trooper {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_cvpi_06_p_trooper {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_f350_08_p_parkranger {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_kawasaki_10_p_trooper {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_black {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_aqua {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_darkblue {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_green {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_red {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_yellow {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_orange {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_white {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_purple {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_darkgreen {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_darkred {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_custom1 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_custom2 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_custom3 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_custom4 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_camaro_12_p_u_custom5 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_black {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_aqua {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_darkblue {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_green {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_red {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_yellow {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_orange {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_white {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_purple {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_darkgreen {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_darkred {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_lvpd {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_fbi {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_lvpd {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_fbi {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_custom3 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_custom4 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_12_p_u_custom5 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_black {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_aqua {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_darkblue {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_green {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_red {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_yellow {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_orange {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_white {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_purple {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_darkgreen {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_darkred {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_custom1 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_custom2 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_custom3 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_custom4 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_charger_15_p_u_custom5 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_black {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_aqua {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_darkblue {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_green {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_red {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_yellow {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_orange {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_white {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_purple {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_darkgreen {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_darkred {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_custom1 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_custom2 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_custom3 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_custom4 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_panamera_10_p_u_custom5 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_unmarked {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_unmarked_2 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_black {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_aqua {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_darkblue {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_green {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_red {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_yellow {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_orange {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_white {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_purple {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	
    class red_suburban_15_p_u_darkgreen {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_darkred {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_custom1 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_custom2 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_custom3 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_custom4 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_suburban_15_p_u_custom5 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_black {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_aqua {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_darkblue {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_green {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_red {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_yellow {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_orange {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_white {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_purple {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_darkgreen {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_darkred {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_custom1 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_custom2 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_custom3 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_custom4 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_taurus_10_p_u_custom5 {
        vItemSpace = 50;
        conditions = "";
        price = 10;
        textures[] = {};
	};
	
	class red_beetle_66_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
	};
	
	class red_beetle_66_fontanagrey {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
	};
	
	class red_beetle_66_pearlwhite {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
	};
	
	class red_beetle_66_rubyred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
	};
	
	class red_beetle_66_seablue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
	};
	
	class red_beetle_66_vwblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
	};
	
	class red_beetle_66_yukonyellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
	};
	
	class red_beetle_66_seasand {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
	};
	
	class red_beetle_66_bahamablue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
	};
	
	class red_beetle_66_javagreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
	};
	
	class red_camaro_12_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_camaro_12_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_camaro_12_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_camaro_12_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_camaro_12_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_camaro_12_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_camaro_12_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_camaro_12_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_camaro_12_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_camaro_12_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_camaro_12_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_camaro_12_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_camaro_12_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 65000;
        textures[] = {};
	};
	
	class red_charger_12_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_12_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_12_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_12_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_12_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_12_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_12_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_12_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_12_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_12_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_12_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_12_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_12_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 82000;
        textures[] = {};
	};
	
	class red_charger_15_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_charger_15_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_charger_15_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_charger_15_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_charger_15_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_charger_15_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_charger_15_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_charger_15_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_charger_15_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_charger_15_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_charger_15_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_charger_15_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_charger_15_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_corvette_14_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_corvette_14_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_corvette_14_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_corvette_14_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_corvette_14_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_corvette_14_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_corvette_14_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_corvette_14_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_corvette_14_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_corvette_14_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_corvette_14_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_corvette_14_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_corvette_14_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 125000;
        textures[] = {};
	};
	
	class red_cvpi_06_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_cvpi_06_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_cvpi_06_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_cvpi_06_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_cvpi_06_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_cvpi_06_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_cvpi_06_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_cvpi_06_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_cvpi_06_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_cvpi_06_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_cvpi_06_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_cvpi_06_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_cvpi_06_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 25000;
        textures[] = {};
	};
	
	class red_f350_08_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_f350_08_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_f350_08_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_f350_08_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_f350_08_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_f350_08_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_f350_08_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_f350_08_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_f350_08_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_f350_08_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_f350_08_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_f350_08_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_f350_08_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 50000;
        textures[] = {};
	};
	
	class red_genesis_16_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
		
	class red_genesis_16_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
	
	class red_genesis_16_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
	
	class red_genesis_16_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
	
	class red_genesis_16_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
	
	class red_genesis_16_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
	
	class red_genesis_16_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
	
	class red_genesis_16_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
	
	class red_genesis_16_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
	
	class red_genesis_16_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
	
	class red_genesis_16_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
	
	class red_genesis_16_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
	
	class red_genesis_16_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 75000;
        textures[] = {};
	};
	
	class red_gs350_13_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 95000;
        textures[] = {};
	};
	
	class red_gs350_13_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 95000;
        textures[] = {};
	};
	
	class red_gs350_13_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 95000;
        textures[] = {};
	};
	
	class red_gs350_13_brown {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 95000;
        textures[] = {};
	};
	
	class red_gs350_13_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 95000;
        textures[] = {};
	};
	
	class red_gs350_13_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 95000;
        textures[] = {};
	};
	
	class red_gs350_13_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 95000;
        textures[] = {};
	};
	
	class red_gs350_13_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 95000;
        textures[] = {};
	};
	
	class red_gs350_13_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 95000;
        textures[] = {};
	};
	
	class red_gs350_13_grey {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 95000;
        textures[] = {};
	};
	
	class red_panamera_10_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_panamera_10_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_panamera_10_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_panamera_10_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_panamera_10_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_panamera_10_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_panamera_10_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_panamera_10_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_panamera_10_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_panamera_10_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_panamera_10_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_panamera_10_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_panamera_10_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 150000;
        textures[] = {};
	};
	
	class red_porsche_12_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_porsche_12_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_porsche_12_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_porsche_12_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_porsche_12_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_porsche_12_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_porsche_12_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_porsche_12_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_porsche_12_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_porsche_12_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_porsche_12_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_porsche_12_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_porsche_12_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 140000;
        textures[] = {};
	};
	
	class red_ram_06_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_ram_06_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_ram_06_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_ram_06_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_ram_06_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_ram_06_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_ram_06_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_ram_06_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_ram_06_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_ram_06_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_ram_06_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_ram_06_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_ram_06_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 90000;
        textures[] = {};
	};
	
	class red_s65_12_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_s65_12_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_s65_12_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_s65_12_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_s65_12_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_s65_12_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_s65_12_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_s65_12_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_s65_12_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_s65_12_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_s65_12_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_s65_12_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_s65_12_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 100000;
        textures[] = {};
	};
	
	class red_suburban_15_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_suburban_15_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_suburban_15_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_suburban_15_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_suburban_15_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_suburban_15_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_suburban_15_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_suburban_15_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_suburban_15_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_suburban_15_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_suburban_15_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_suburban_15_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_suburban_15_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 60000;
        textures[] = {};
	};
	
	class red_taurus_10_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_taurus_10_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_taurus_10_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_taurus_10_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_taurus_10_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_taurus_10_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_taurus_10_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_taurus_10_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_taurus_10_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_taurus_10_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_taurus_10_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_taurus_10_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_taurus_10_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 55000;
        textures[] = {};
	};
	
	class red_vanquish_13_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_vanquish_13_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_vanquish_13_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_vanquish_13_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_vanquish_13_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_vanquish_13_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_vanquish_13_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_vanquish_13_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_vanquish_13_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_vanquish_13_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_vanquish_13_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_vanquish_13_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_vanquish_13_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 130000;
        textures[] = {};
	};
	
	class red_xkrs_12_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_xkrs_12_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_xkrs_12_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_xkrs_12_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_xkrs_12_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_xkrs_12_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_xkrs_12_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_xkrs_12_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_xkrs_12_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_xkrs_12_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_xkrs_12_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_xkrs_12_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_xkrs_12_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 135000;
        textures[] = {};
	};
	
	class red_venomgt_11_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_venomgt_11_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_venomgt_11_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_venomgt_11_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_venomgt_11_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_venomgt_11_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_venomgt_11_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_venomgt_11_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_venomgt_11_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_venomgt_11_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_venomgt_11_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_venomgt_11_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_venomgt_11_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 120000;
        textures[] = {};
	};
	
	class red_explorer_16_black {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	
	class red_explorer_16_aqua {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	
	class red_explorer_16_darkblue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	
	class red_explorer_16_green {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	
	class red_explorer_16_red {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	
	class red_explorer_16_pink {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	
	class red_explorer_16_yellow {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	
	class red_explorer_16_orange {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	
	class red_explorer_16_white {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	
	class red_explorer_16_purple {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	
	class red_explorer_16_darkgreen {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	
	class red_explorer_16_darkred {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	
	class red_explorer_16_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 85000;
        textures[] = {};
	};
	

    class shounka_nemo_pompier {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };

    class cl3_dodge_chargerum_o_adac {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };

    class red_f350_08_p_sac {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };

    class red_explorer_16_e_sac {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };

    class cl3_q7_clpd_etu {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };

    class cl3_f150raptor_orange {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };

    class cl3_suv_emt_MR {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };

    class Quiet_sprinter_depannage {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };

    class shounka_a3_mantgs {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };

    class red_towtruck_08_orange {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };
	
	class red_towtruck_08_sac {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };

    class cl3_fire_rescue_yellow {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };

    class EC635_ADAC {
        vItemSpace = 250;
        conditions = "";
        price = 27500;
        textures[] = { };
    };
	
    class MELB_H6M {
        vItemSpace = 150;
        conditions = "";
        price = 2500;
        textures[] = { };
    };
    class Sab_aeroc {
        vItemSpace = 60;
        conditions = "";
        price = 40000;
        textures[] = {};
    };		

    class Sab_aeroc_2 {
        vItemSpace = 60;
        conditions = "";
        price = 40000;
        textures[] = {};
    };	

    class Sab_aeroc_3 {
        vItemSpace = 60;
        conditions = "";
        price = 40000;
        textures[] = {};
    };		
			
    class sab_albatrosd2 {
        vItemSpace = 30;
        conditions = "";
        price = 75000;
        textures[] = {};
    };
	
    class sab_albatrosb2_civ {
        vItemSpace = 30;
        conditions = "";
        price = 75000;
        textures[] = {};
    };
	
    class sab_ask {
        vItemSpace = 25;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class sab_l19_sea_1 {
        vItemSpace = 100;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class sab_l19_sea_2 {
        vItemSpace = 100;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class sab_l19_3 {
        vItemSpace = 100;
        conditions = "";
        price = 60000;
        textures[] = {};
    };	
	
    class sab_l19_2 {
        vItemSpace = 100;
        conditions = "";
        price = 60000;
        textures[] = {};
    };
	
    class sab_comet {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
    };
	
    class sab_comet_3 {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
    };
	
    class sab_comet_2 {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class sab_do228_2 {
        vItemSpace = 125;
        conditions = "";
        price = 98000;
        textures[] = {};
    };
    
	class sab_do228 {
        vItemSpace = 125;
        conditions = "";
        price = 98000;
        textures[] = {};
    };
    
	class sab_do228_6 {
        vItemSpace = 125;
        conditions = "";
        price = 98000;
        textures[] = {};
    };	

	class sab_dhc3 {
        vItemSpace = 90;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

	class sab_falcon {
        vItemSpace = 180;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

	class sab_trimotor {
        vItemSpace = 200;
        conditions = "";
        price = 185000;
        textures[] = {};
    };
	
	class sab_trimotor_2 {
        vItemSpace = 200;
        conditions = "";
        price = 185000;
        textures[] = {};
    };
	
	class Sab_Sikorsky38 {
        vItemSpace = 80;
        conditions = "";
        price = 138000;
        textures[] = {};
    };
	
	class Sab_Sikorsky38_2 {
        vItemSpace = 80;
        conditions = "";
        price = 138000;
        textures[] = {};
    };
	
	class Sab_Sikorsky38_3 {
        vItemSpace = 80;
        conditions = "";
        price = 138000;
        textures[] = {};
    };
};

