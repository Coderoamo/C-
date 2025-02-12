public class StudentGrader {

   String studentName;

   public static int average;

   static int calcuAve(int[] studentGrade) {

    int sum = 0;


    for(int i = 0; i < studentGrade.length; i++) {

        sum += studentGrade[i];
    }

    average = sum/studentGrade.length;

    return average;
   }

   static void displayReport(String studentName, int[] studentGrades) {

    System.out.println("Student Name: " + studentName);
    System.out.println("Average: " + calcuAve(studentGrades));

    if(calcuAve(studentGrades) > 70) {
        System.out.println("Status: Passed");
    }
    else {
        System.out.println("Status: Failed");
    }
   }
}
