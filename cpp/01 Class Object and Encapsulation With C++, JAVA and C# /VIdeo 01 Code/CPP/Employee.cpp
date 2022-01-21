class Employee{
    private:
      int employeeId;
      char* employeeName;
   public :
   	void setEmployeeId(int employeeId){ 
   			this->employeeId = employeeId;
	   }
	 int  getEmployeeId(){
	 	return this->employeeId;
	 }
	 void setEmployeeName(char* employeeName){
	 	this->employeeName = employeeName;
	 }
	 char* getEmployeeName(){
	 	return this->employeeName;
	 }
	 
};

