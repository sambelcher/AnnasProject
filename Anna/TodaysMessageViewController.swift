//
//  SecondViewController.swift
//  Anna
//
//  Created by Sam Belcher on 5/18/1398 AP.
//  Copyright © 1398 Sam Belcher. All rights reserved.
//

import UIKit
import FirebaseStorage
import FirebaseUI
import Firebase
import SDWebImage

class TodaysMessageViewController: UIViewController {

    var messageToShow: String?
    var messagesBackgroundImage: String?
    
    @IBOutlet weak var todaysMessage: UILabel!
    @IBOutlet weak var homeButton: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Use Firebase library to configure APIs
        if(FirebaseApp.app() == nil){
            FirebaseApp.configure()
        }
        let storage = Storage.storage()
        // Reference to an image file in Firebase Storage
        let storageRef = storage.reference()
        // Placeholder image
        let placeholderImage = UIImage(named: "vertical_bg.png")
        // Reference to an image file in Firebase Storage
        let imageName = (messagesBackgroundImage ?? "image340") + ".png"
        let reference = storageRef.child(imageName)

        let backgroundImage = UIImageView(frame: UIScreen.main.bounds)
        backgroundImage.sd_setImage(with: reference, placeholderImage: placeholderImage)
        backgroundImage.contentMode = UIView.ContentMode.scaleAspectFill
        self.view.insertSubview(backgroundImage, at: 0)
        
        todaysMessage.text = messageToShow
        let todaysMessageHeight = todaysMessage.optimalHeight
        todaysMessage.frame = CGRect(x: todaysMessage.frame.origin.x, y: todaysMessage.frame.origin.y, width: todaysMessage.frame.width, height: todaysMessageHeight)
        todaysMessage.layer.cornerRadius = 10
        homeButton.layer.cornerRadius = 10
        homeButton.contentEdgeInsets = UIEdgeInsets(top: 15, left: 35, bottom: 15, right: 35)
        
        
    }
}

extension UILabel {
    var optimalHeight : CGFloat {
        get
        {
            let label = UILabel(frame: CGRect(x: 0, y: 0, width: self.bounds.width, height: CGFloat.greatestFiniteMagnitude))
            label.numberOfLines = 0
            label.lineBreakMode = NSLineBreakMode.byWordWrapping
            label.font = self.font
            label.text = self.text
            label.sizeToFit()
            return label.frame.height
        }
        
    }
}
