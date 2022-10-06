while (hero.get_hp() > 0 && earth_slime.get_status())
    {
        while (hero.get_hp() > 0 && air_slime.get_status())
        {
            cout << "YOU ARE AGAINST AIR SLIME, PREPARE YOURSELF" << endl;

            cout << "Choose element: ";
            cin >> our_color;
            sword.set_color(our_color);

            if (air_slime.get_color() == sword.get_color())
            {
                air_slime.set_status(false);
                cout << "Congratulations! you have dfeated this slime" << endl;
            }
            else
            {
                int taken_damage = air_slime.air_cut();
                hero.set_hp(hero.get_hp() - taken_damage);
                cout << "You've taken: " << taken_damage << endl;
                cout << "HP: " << hero.get_hp() << endl;
            }
        }
