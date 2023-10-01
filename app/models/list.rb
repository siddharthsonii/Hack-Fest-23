class List < ActiveRecord::Base
  
  validates :name, presence: true
  validates_uniqueness_of :name, on: :create, message: "must be unique"
  
  has_many :tasks , dependent: :destroy

  def done_tasks
     tasks.where(done: true).order("updated_at DESC")
  end
  
    def done_tasks1
     tasks.where(done: true).order("updated_at DESC")
  end
  
    def done_tasks2
     tasks.where(done: true).order("updated_at DESC")
  end
  
    def done_tasks3
     tasks.where(done: true).order("updated_at DESC")
  end
  
    def done_tasks4
     tasks.where(done: true).order("updated_at DESC")
  end
  
end

