void VaccinationSchedule::setVaccinationScheduleDetails(int SID, int CID, int VID, string Date, string Time, int MaxApp) {
          schedule_id = SID;
          center_id = CID;
          vaccine_id = VID;
          available_date = Date;
          available_time = Time;
          max_appointments = MaxApp;
   }
   void VaccinationSchedule::dispalyVaccinationScheduleDetails() {
cout << endl << " Schedule ID : " << schedule_id << endl;
cout << " Center ID : " << center_id << endl;
cout << " vaccine ID : " << vaccine_id << endl;
cout << " Available Date : " << available_date << endl;
cout << " Available Time : " << available_time << endl;
cout << " Max Appointments : " << max_appointments << endl;
}
