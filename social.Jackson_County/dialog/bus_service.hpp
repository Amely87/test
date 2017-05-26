class life_dialog_taxi {

    idd = 48400;
    movingEnable = false;
    enableSimulation = true;

    class controlsBackground {
        class life_RscTitleBackground:life_RscText {
            colorBackground[] = {0.1, 0, 0, 0.7};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 1.0;
            h = (1 / 25);
        };

        class MainBackground:life_RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 1.0;
            h = 0.6 - (22 / 250);
        };
    };

    class controls {

        class Title : life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = 48401;
            text = "";
            x = 0.1;
            y = 0.2;
            w = 1.0;
            h = (1 / 25);
        };

        class LocationList : life_RscListBox
        {
            idc = 48402;
            text = "";
            sizeEx = 0.035;
            colorBackground[] = {0,0,0,0};
            x = 0.12; y = 0.26;
            w = 0.96; h = 0.4;
        };

        class CloseButtonKey : life_RscButtonMenu {
            idc = -1;
            text = "Schließen";
            onButtonClick = "closeDialog 0;";
            x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class BuyFare : life_RscButtonMenu {
            idc = -1;
            text = "Linienbus";
            onButtonClick = "[false] spawn life_fnc_taxiPurchaseFare";
            x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class BuyFareSpeedy : life_RscButtonMenu {
            idc = -1;
            text = "Reisebus";
            onButtonClick = "[true] spawn life_fnc_taxiPurchaseFare";
            x = 0.26 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (10 / 40);
            h = (1 / 25);
        };

    };
};