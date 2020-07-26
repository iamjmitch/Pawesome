<!DOCTYPE html>
<html lang="en">
   <head>
      <meta charset="UTF-8">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <meta http-equiv="X-UA-Compatible" content="ie=edge">
      <title>Pawesome Pet Services - Contact Us</title>
      <?php include("../inc/meta.inc")?> 
      <?php include('../inc/style.inc')?>
   </head>
   <body>
      <?php include("../inc/header.inc")?> 
      <div class="banner">
         <div class="bannerImg">
            <img src="../images/pageHeaders/contact.png" alt="">
         </div>
      </div>
      <section class="pageContainer">
         <div id="serviceBoxHeader" class="bitter">
            <p>Talk To Us</p>
            <smaller>We're here to spread a little Pawesomeness!</smaller>
            <smaller>Have a question? want to make a booking?</smaller>
            <smaller>Send us a message and we will contact you ASAP</smaller>
         </div>
         <div id="contactForm">
            <form action="../inc/sendmail.php" method="POST">
               <div class="formTopContainer">
                  <div class="formContainer">
                     <div class="divName">
                        <i class="fas fa-user"></i>
                        <input type="text" name="name" id="name" placeholder="Your Name">
                     </div>
                  </div>
                  <div class="formContainer">
                     <div class="divEmail">
                        <i class="fas fa-envelope"></i>
                        <input type="email" name="email" id="email" placeholder="Your Email">
                     </div>
                  </div>
                  <div class="formContainer">
                     <div class="divPhone">
                        <i class="fas fa-phone"></i>
                        <input type="phone" name="phone" id="phone" placeholder="Your Phone Number">
                     </div>
                  </div>
               </div>
               <textarea name="message" id="message" placeholder="Your Message"></textarea>
               <button type="submit" name="submit">Submit</button> 
            </form>
         </div>
      </section>
      <?php include("../inc/footer.inc")?>
      <script src="./JS/js.js"></script>
      <script src="https://unpkg.com/hes-gallery/dist/hes-gallery.min.js"></script>
   </body>
</html>