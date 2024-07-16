#include <iostream>
#include <string>
#include <algorithm>
#include "vehicle/vehicle.h"
#include "vehicle/ground/ground.h"
#include "vehicle/air/air.h"
#include "vehicle/ground/camel.h"
#include "vehicle/ground/fast_camel.h"
#include "vehicle/ground/centaur.h"
#include "vehicle/ground/all_terrain_boots.h"
#include "vehicle/air/magic_carpet.h"
#include "vehicle/air/eagle.h"
#include "vehicle/air/broom.h"

int vehicles_count = 0; // Кол-во зарегистрированных ТС
const int MAX_VEHICLES = 7; // Максимальное количество ТС
std::string registered_vehicles[MAX_VEHICLES - 1]; // зарегистрированные ТС

bool isVehicleAlreadyRegistered(const std::string& vehicle)
{
  for (int i = 0; i < vehicles_count; ++i)
  {
    if (registered_vehicles[i] == vehicle)
    {
        return true; // Транспортное средство уже зарегистрировано
    }
  }
  return false;
}

void greetings()
{
  std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
}

int choose_race_type()
{
  std::cout << "1. Гонка для наземного транспорта"
            << "\n2. Гонка для воздушного транспорта"
            << "\n3. Гонка для наземного и воздушного транспорта" << std::endl;
  int race_type = 0;
  do
  {
  std::cout << "Выберите тип гонки: ";
  std::cin >> race_type;
  } while (race_type < 1 || race_type >= 4);
  return race_type;
}

double set_distance()
{
  double distance = 0;
  do
  {
  std::cout << "Укажите длину дистанции (должна быть положительна): ";
  std::cin >> distance;
  } while (distance < 0);
  return distance;
}

int choose_register_transport()
{
  int action = 0;
  if (vehicles_count < 2)
  {
    std::cout << "\nДолжно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl;
    std::cout << "1. Зарегистрировать транспорт" << std::endl;
    do
    {
    std::cout << "Выберите действие: ";
    std::cin >> action;
    } while (action != 1);
    return action;
  }
  else
  {
    std::cout << "1. Зарегистрировать транспорт\n"
              << "2. Начать гонку" << std::endl;
    do
    {
    std::cout << "Выберите действие: ";
    std::cin >> action;
    } while (action != 1 && action != 2);
    return action;
  }
}

void output_race_type_and_distance(int& race_type, double& distance)
{
  switch(race_type)
  {
    case 1: std::cout << "\nГонка для наземного транспорта."; break;
    case 2: std::cout << "\nГонка для воздушного транспорта."; break;
    case 3: std::cout << "\nГонка для наземного и воздушного транспорта."; break;
  }
  std::cout << " Расстояние: " << distance << std::endl;
}

int choose_vehicle_from_list()
{
  int input_vehicle_number = 0;
  Camel camel;
  FastCamel fastCamel;
  Centaur centaur;
  AllTerrainBoots allTerrainBoots;
  Eagle eagle;
  MagicCarpet magicCarpet;
  Broom broom;
  do
  {
    std::cout << "1. " << allTerrainBoots.get_name() << "\n"
              << "2. " << broom.get_name() << "\n"
              << "3. " << camel.get_name() << "\n"
              << "4. " << centaur.get_name() << "\n"
              << "5. " << eagle.get_name() << "\n"
              << "6. " << fastCamel.get_name() << "\n"
              << "7. " << magicCarpet.get_name() << "\n"
              << "0. Закончить регистрацию" << std::endl;
    std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
    std::cin >> input_vehicle_number;
  } while (input_vehicle_number > 7 || input_vehicle_number < 0);
  return input_vehicle_number;
}

bool registered_incorrect_vehicle_type(int& race_type, int& input_vehicle_number)
{
  if ((race_type == 1 && (input_vehicle_number == 2 || input_vehicle_number == 5 || input_vehicle_number == 7)) || (race_type == 2 && (input_vehicle_number == 1 || input_vehicle_number == 3 || input_vehicle_number == 4 || input_vehicle_number == 6)))
  {
    return true; // Попытка зарегистрировать неправильный тип транспортного средства!
  }
  return false;
}

bool chose_exit(int& input_vehicle_number)
{
  if (input_vehicle_number == 0)
  {
    return true; // выход
  }
  return false;
}

void output_registered_vehicles()
{
  std::cout << "Зарегистрированные транспортные средства:";
  for (int i = 0; i < vehicles_count; ++i)
  {
    if (i != 0)
    {
      std::cout << ",";
    }
    std::cout << " " << registered_vehicles[i];
  }
  std::cout << std::endl;
}

double* create_array_to_store_calculated_time(int vehicles_count)
{
  return new double[vehicles_count]();
}

void fill_array_to_store_calculated_time(double* time_storage_array, double distance)
{
  Camel camel;
  FastCamel fastCamel;
  Centaur centaur;
  AllTerrainBoots allTerrainBoots;
  Eagle eagle;
  MagicCarpet magicCarpet;
  Broom broom;
  
  for (int i = 0; i < vehicles_count; ++i)
  {
    if (registered_vehicles[i] == "Верблюд")
    {
      time_storage_array[i] = camel.calculate_total_time(distance);
    }
    else if (registered_vehicles[i] == "Верблюд-быстроход")
    {
      time_storage_array[i] = fastCamel.calculate_total_time(distance);
    }
    else if (registered_vehicles[i] == "Кентавр")
    {
      time_storage_array[i] = centaur.calculate_total_time(distance);
    }
    else if (registered_vehicles[i] == "Ботинки-вездеходы")
    {
      time_storage_array[i] = allTerrainBoots.calculate_total_time(distance);
    }
    else if (registered_vehicles[i] == "Орёл")
    {
      time_storage_array[i] = eagle.calculate_total_time(distance);
    }
    else if (registered_vehicles[i] == "Ковёр-самолёт")
    {
      time_storage_array[i] = magicCarpet.calculate_total_time(distance);
    }
    else if (registered_vehicles[i] == "Метла")
    {
      time_storage_array[i] = broom.calculate_total_time(distance);
    }
  }
}

void sort(double* time_storage_array)
{
  for (int i = 0; i < vehicles_count - 1; ++i)
  {
    for (int j = 0; j < vehicles_count - i - 1; ++j)
    {
      if (time_storage_array[j] > time_storage_array[j + 1])
      {
        std::swap(time_storage_array[j], time_storage_array[j + 1]);
        std::swap(registered_vehicles[j], registered_vehicles[j + 1]);
      }
    }
  }
}

void output_race_results(double* time_storage_array)
{
  for (int i = 0; i < vehicles_count; ++i)
  {
    std::cout << i + 1 << ". " << registered_vehicles[i] << ". Время: " << time_storage_array[i] << std::endl;
  }
}

void delete_array_to_store_calculated_time(double* time_storage_array)
{
  delete[] time_storage_array;
}

int choose_another_race_or_exit()
{
  int last_action = 0;
  std::cout << "\n1. Провести еще одну гонку\n"
            << "2. Выйти" << std::endl;
  do
  {
  std::cout << "Выберите действие: ";
  std::cin >> last_action;
  } while (last_action != 1 && last_action != 2);
  std::cout << std::endl;
  if (last_action == 1)
  {
    vehicles_count = 0;
    for (int i = 0; i < MAX_VEHICLES - 1; ++i)
    {
      registered_vehicles[i] = "";
    }
  }
  if (last_action == 2)
  {
    std::cout << "Удачи и до новых встреч!" << std::endl;
  }
  return last_action;
}

int main() {
  greetings();
  int last_action = 0;
  do
  {
    int race_type = choose_race_type();
    double distance = set_distance();
    int action = choose_register_transport();

    std::string vehicles[] = { "Ботинки-вездеходы", "Метла", "Верблюд", "Кентавр", "Орёл", "Верблюд-быстроход", "Ковёр-самолёт" };
    do
    {
      output_race_type_and_distance(race_type, distance);
      if (registered_vehicles[0] != "") { output_registered_vehicles(); }
      int input_vehicle_number = choose_vehicle_from_list();

      if(registered_incorrect_vehicle_type(race_type, input_vehicle_number)) //
      {
        std::cout << "Попытка зарегистрировать неправильный тип транспортного средства!" << std::endl;
        continue;
      }
      if (chose_exit(input_vehicle_number))
      {
        action = choose_register_transport();
        continue;
      }
      std::string selected_vehicle = vehicles[input_vehicle_number - 1];
      if (isVehicleAlreadyRegistered(selected_vehicle))
      {
        std::cout << "Транспортное средство \"" << selected_vehicle << "\" уже зарегистрировано." << std::endl;
        continue;
      }
      registered_vehicles[vehicles_count] = selected_vehicle;
      vehicles_count++;
      std::cout << "Транспортное средство " << "\"" << vehicles[input_vehicle_number - 1] << "\" успешно зарегистрировано!" << std::endl;
    } while (action == 1);

    Camel camel;
    FastCamel fastCamel;
    Centaur centaur;
    AllTerrainBoots allTerrainBoots;
    Eagle eagle;
    MagicCarpet magicCarpet;
    Broom broom;
    
    std::cout << "\nРезультаты гонки:" << std::endl;
    double* time_storage_array = create_array_to_store_calculated_time(vehicles_count);
    fill_array_to_store_calculated_time(time_storage_array, distance);
    sort(time_storage_array);
    output_race_results(time_storage_array);
    delete_array_to_store_calculated_time(time_storage_array);
    last_action = choose_another_race_or_exit();
    if (last_action == 2) { break; }
  } while (last_action == 1);
  
  return 0;
}