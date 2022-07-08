const firebaseConfig = {
  apiKey: "AIzaSyDY2et5u6ipphSpeHN0og6kBGiQhg0T3vo",
  authDomain: "food-donation-a1538.firebaseapp.com",
  databaseURL: "https://food-donation-a1538-default-rtdb.firebaseio.com",
  projectId: "food-donation-a1538",
  storageBucket: "food-donation-a1538.appspot.com",
  messagingSenderId: "806118376670",
  appId: "1:806118376670:web:261960b9ae77e78c216e4f",
  measurementId: "G-BTVZMSBWTV"
};

  firebase.initializeApp(firebaseConfig);

  var FoodDonationDB = firebase.database().ref('FoodDonation');

  document.getElementById("FoodDonation").addEventListener("submit", submitForm);

  function submitForm(e)
  {
      e.preventDefault();
      var name = getElementVal("name");
      var Email = getElementVal("Email");
      var Phone_number = getElementVal("Phone_number");
      var Quantity_of_food = getElementVal("Quantity_of_food");
      var Address = getElementVal("Address");
 
      saveMessage(name, Email, Phone_number, Quantity_of_food, Address);

      

      document.getElementById("FoodDonation").reset();
      
  }

  const saveMessage = (name, Email, Phone_number,  Quantity_of_food, Address) => {
      var newFoodDonation = FoodDonationDB.push();

      newFoodDonation.set({

        name : name,
        Email : Email,
        Phone_number : Phone_number,
        Quantity_of_food : Quantity_of_food,
        Address : Address

      });

  };

  const getElementVal=(id) =>{
      return document.getElementById(id).value;
  };