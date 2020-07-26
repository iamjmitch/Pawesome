<!-- Get file location from within server to allow for correct anchors -->
<?php $currentpage = $_SERVER['REQUEST_URI'];
   $filepath = "";
   // Break down url to determine which page should be given "active" CSS class
   $pageurl = $_SERVER['REQUEST_URI'];
   $path = parse_url($pageurl, PHP_URL_PATH);
   $breakurl = explode('/', $path);
   $page = end($breakurl);
   
   if ($page == "" || $page == "index.php"){
       $filepath = "./";
    }
    else {
       $filepath = "../";    
    }
   ?>
<footer class="patternbg">
   <div id="footerContainer" class="contain ">
      <div id="footerLogo">
         <?php echo '<img src="'.$filepath.'images/footerlogo.png" alt="">';?>
      </div>
      <div id="missionStatement">
         <h5>
            Our Promise
         </h5>
         <p>
            We offer Hydrobath, Dog Walking, Pet Sitting & Furniture services that are sure to make your pet's
            day totally pawesome!
         </p>
      </div>
      <div id="footerLinks">
         <h5>
            Links
         </h5>
         <a href="#home">Home</a>
         <a href="#shop">Shop</a>
         <a href="#aboutus">About Us</a>
         <a href="#contactus">Contact Us</a>
      </div>
   </div>
   <div id="copyright" class="contain">
      <p> Pawesome Pet Services & subsidiaries &copy; <?php echo date("Y"); ?></p>
   </div>
   <a href="https://iamjmitch.com/" target="_blank">
      <div id="dbiajm" class="contain">
         <?php echo '<img src="'.$filepath.'images/iamjmitch-white.png" alt="">';?>
   </a>
   </div>
</footer>
<script>
   function nav() {
     var x = document.getElementById("myTopnav");
     if (x.className === "topnav") {
       x.className += " responsive";
     } else {
       x.className = "topnav";
     }
   }
</script>