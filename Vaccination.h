#pragma once
   #include<iostream>
   using namespace std;
   class VaccinationSchedule
   {
          private:
                int schedule_id;
                int center_id;
                int vaccine_id;
                string available_date;
                string available_time;
                int max_appointments;
public:
void setVaccinationScheduleDetails(int SID, int CID, int VID, string Date,
   string Time, int MaxApp);
                void dispalyVaccinationScheduleDetails();
};
