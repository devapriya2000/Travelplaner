#include <stdio.h>

int main() {
    int continent, country, climate;

    printf("Welcome to the Travel Planner!\n\n");


    printf("Select a continent:\n");
    printf("1. Asia\n");
    printf("2. Europe\n");
    printf("3. North America\n");
    printf("4. South America\n");
    printf("5. Africa\n");
    printf("6. Australia\n");
    printf("7. Antarctica\n");
    printf("Enter your choice (1-7): ");
    scanf("%d", &continent);

    if (continent < 1 || continent > 7) {
        printf("Error: Invalid continent choice! Please enter a number between 1 and 7.\n");
        return 1;
    }


    switch (continent) {
        case 1: // Asia
            printf("\nYou chose Asia. Select a country:\n");
            printf("1. India\n2. Japan\n3. Thailand\n4. Nepal\n");
            scanf("%d", &country);
            break;
        case 2: // Europe
            printf("\nYou chose Europe. Select a country:\n");
            printf("1. France\n2. Germany\n3. Italy\n4. Norway\n");
            scanf("%d", &country);
            break;
        case 3: // North America
            printf("\nYou chose North America. Select a country:\n");
            printf("1. United States\n2. Canada\n3. Mexico\n4. Cuba\n");
            scanf("%d", &country);
            break;
        case 4: // South America
            printf("\nYou chose South America. Select a country:\n");
            printf("1. Brazil\n2. Argentina\n3. Peru\n4. Chile\n");
            scanf("%d", &country);
            break;
        case 5: // Africa
            printf("\nYou chose Africa. Select a country:\n");
            printf("1. Kenya\n2. Egypt\n3. South Africa\n4. Morocco\n");
            scanf("%d", &country);
            break;
        case 6: // Australia
            printf("\nYou chose Australia. Select a country:\n");
            printf("1. Australia\n2. New Zealand\n3. Papua New Guinea\n4. Fiji\n");
            scanf("%d", &country);
            break;
        case 7: // Antarctica
            printf("\nYou chose Antarctica. Only one choice available.\n");
            country = 1;
            break;
        default:
            printf("Invalid continent choice.\n");
            return 1;
    }

    if (continent != 7 && (country < 1 || country > 4)) {
        printf("Error: Invalid country choice! Please enter a number between 1 and 4.\n");
        return 1;
    }


    printf("\nSelect preferred climate:\n");
    printf("1. Cold\n2. Hot\n");
    scanf("%d", &climate);

    if (climate != 1 && climate != 2) {
        printf("Error: Invalid climate choice! Please enter 1 or 2.\n");
        return 1;
    }


    printf("\n--- Recommended Places ---\n");

    if (continent == 1) { // Asia
        if (country == 1) { // India
            if (climate == 1)
                printf("Shimla, Leh\n");
            else
                printf("Goa, Kerala\n");
        } else if (country == 2) { // Japan
            if (climate == 1)
                printf("Hokkaido, Nagano\n");
            else
                printf("Okinawa, Kagoshima\n");
        } else if (country == 3) { // Thailand
            if (climate == 1)
                printf("Chiang Mai Highlands\n");
            else
                printf("Phuket, Krabi\n");
        } else if (country == 4) { // Nepal
            if (climate == 1)
                printf("Everest Base Camp, Pokhara\n");
            else
                printf("Chitwan, Lumbini\n");
        }
    } else if (continent == 2) { // Europe
        if (country == 1) { // France
            if (climate == 1)
                printf("Chamonix, Grenoble\n");
            else
                printf("Nice, Marseille\n");
        } else if (country == 2) { // Germany
            if (climate == 1)
                printf("Bavarian Alps, Black Forest\n");
            else
                printf("Berlin, Frankfurt\n");
        } else if (country == 3) { // Italy
            if (climate == 1)
                printf("Dolomites, Milan\n");
            else
                printf("Rome, Sicily\n");
        } else if (country == 4) { // Norway
            if (climate == 1)
                printf("Tromsø, Lofoten Islands\n");
            else
                printf("Oslo, Bergen\n");
        }
    } else if (continent == 3) { // North America
        if (country == 1) { // USA
            if (climate == 1)
                printf("Alaska, Yellowstone\n");
            else
                printf("Florida, California\n");
        } else if (country == 2) { // Canada
            if (climate == 1)
                printf("Banff, Quebec\n");
            else
                printf("Vancouver, Toronto\n");
        } else if (country == 3) { // Mexico
            if (climate == 1)
                printf("Toluca, Sierra Madre\n");
            else
                printf("Cancun, Mexico City\n");
        } else if (country == 4) { // Cuba
            if (climate == 1)
                printf("Sierra Maestra\n");
            else
                printf("Havana, Varadero\n");
        }
    } else if (continent == 4) { // South America
        if (country == 1) { // Brazil
            if (climate == 1)
                printf("Gramado, Petropolis\n");
            else
                printf("Rio de Janeiro, Amazon\n");
        } else if (country == 2) { // Argentina
            if (climate == 1)
                printf("Bariloche, Patagonia\n");
            else
                printf("Buenos Aires, Mendoza\n");
        } else if (country == 3) { // Peru
            if (climate == 1)
                printf("Cusco, Andes Mountains\n");
            else
                printf("Lima, Amazon Basin\n");
        } else if (country == 4) { // Chile
            if (climate == 1)
                printf("Torres del Paine\n");
            else
                printf("Atacama Desert, Santiago\n");
        }
    } else if (continent == 5) { // Africa
        if (country == 1) { // Kenya
            if (climate == 1)
                printf("Mount Kenya\n");
            else
                printf("Mombasa, Nairobi\n");
        } else if (country == 2) { // Egypt
            if (climate == 1)
                printf("Siwa Oasis (winter)\n");
            else
                printf("Cairo, Luxor\n");
        } else if (country == 3) { // South Africa
            if (climate == 1)
                printf("Drakensberg Mountains\n");
            else
                printf("Cape Town, Durban\n");
        } else if (country == 4) { // Morocco
            if (climate == 1)
                printf("Atlas Mountains\n");
            else
                printf("Marrakech, Fez\n");
        }
    } else if (continent == 6) { // Australia/Oceania
        if (country == 1) { // Australia
            if (climate == 1)
                printf("Tasmania, Blue Mountains\n");
            else
                printf("Sydney, Gold Coast\n");
        } else if (country == 2) { // New Zealand
            if (climate == 1)
                printf("Queenstown, Mt. Cook\n");
            else
                printf("Auckland, Rotorua\n");
        } else if (country == 3) { // Papua New Guinea
            if (climate == 1)
                printf("Highland Valleys\n");
            else
                printf("Port Moresby, Madang\n");
        } else if (country == 4) { // Fiji
            if (climate == 1)
                printf("Highlands of Viti Levu\n");
            else
                printf("Nadi, Suva\n");
        }
    } else if (continent == 7) { // Antarctica
        if (climate == 1)
            printf("McMurdo Station, South Pole Camp\n");
        else
            printf("Antarctica is always cold! No hot destinations available.\n");
    }

    printf("\nThank you for using the Travel Planner!\n");
    return 0;
}
