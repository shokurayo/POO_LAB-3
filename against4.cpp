while (hero.get_hp() > 0 && earth_slime.get_status())
        {
            cout << "YOU ARE AGAINST EARTH SLIME, PREPARE YOURSELF" << endl;

            cout << "Choose element: ";
            cin >> our_color;
            sword.set_color(our_color);

            if (earth_slime.get_color() == sword.get_color())
            {
                earth_slime.set_status(false);
                cout << "Congratulations! you have dfeated this slime" << endl;
            }
            else
            {
                int taken_damage = earth_slime.earthquake();
                hero.set_hp(hero.get_hp() - taken_damage);
                cout << "You've taken: " << taken_damage << endl;
                cout << "HP: " << hero.get_hp() << endl;
            }
        }
