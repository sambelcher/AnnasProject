//
//  ViewController.swift
//  Anna
//
//  Created by Sam Belcher on 5/18/1398 AP.
//  Copyright © 1398 Sam Belcher. All rights reserved.
//

import UIKit
    
    class ViewController: UIViewController {
    
        var app = Anna()
        
        
        @IBOutlet weak var messageLabel: UILabel!
        
        @IBOutlet weak var showTodaysMessage: UIButton!
        
        override func viewDidLoad() {
            super.viewDidLoad()
            let backgroundImage = UIImageView(frame: UIScreen.main.bounds)
            backgroundImage.image = UIImage(named: "vertical_bg")
            backgroundImage.contentMode = UIView.ContentMode.scaleAspectFill
            self.view.insertSubview(backgroundImage, at: 0)
            
            showTodaysMessage.layer.cornerRadius = 10
            
            let appDelegate = UIApplication.shared.delegate as? AppDelegate
            appDelegate!.scheduleNotification(notificationType: "Sam Loves You")
        }
        
        override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
            if segue.identifier == "ShowTodaysMessage"
            {
                //get the index of message to grab by subtracting annas birhtday from current date
                
                let formatter = DateFormatter()
                formatter.dateFormat = "yyyy/MM/dd"
                let someDateTime = formatter.date(from: "2019/9/8") //anna's birthday
                
                let calendar = Calendar.current
                
                // Replace the hour (time) of both dates with 00:00
                let date1 = calendar.startOfDay(for: someDateTime!)
                let date2 = calendar.startOfDay(for: Date())
                
                let components = calendar.dateComponents([.day], from: date1, to: date2)
                
                let dayIndex = components.day!
                //grab the message using index
	                let todaysMessage = app.messages[dayIndex]
                print(todaysMessage.message)
                if let nextViewController = segue.destination as? TodaysMessageViewController {
                    nextViewController.messageToShow = todaysMessage.message
                    nextViewController.messagesBackgroundImage = todaysMessage.image
                    print(todaysMessage.message)
                }
            }
        }
        
        
        @IBAction func showCurrentMessage(_ sender: UIButton) {
            //get the index of message to grab by subtracting annas birhtday from current date
            
            let formatter = DateFormatter()
            formatter.dateFormat = "yyyy/MM/dd"
            let someDateTime = formatter.date(from: "2019/08/28") //anna's birthday
            
            let calendar = Calendar.current
            
            // Replace the hour (time) of both dates with 00:00
            let date1 = calendar.startOfDay(for: someDateTime!)
            let date2 = calendar.startOfDay(for: Date())
            
            let components = calendar.dateComponents([.day], from: date1, to: date2)
            let dayIndex = components.day!
            
            //grab the message using index
            let todaysMessage = app.messages[dayIndex]
            print(todaysMessage.message)
            
            //set the message on the screen and change background
            messageLabel.text = todaysMessage.message
            
        }
        
}


